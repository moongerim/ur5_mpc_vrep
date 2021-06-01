import sys
import datetime


def generate_timestamp():
    return datetime.datetime.now().strftime("%Y%m%d_%H%M%S")


class stream_tee(object):
    # Based on https://gist.github.com/327585 by Anand Kunal
    def __init__(self, stream1, stream2):
        self.stream1 = stream1
        self.stream2 = stream2
        self.__missing_method_name = None  # Hack!

    def __getattribute__(self, name):
        return object.__getattribute__(self, name)

    def __getattr__(self, name):
        self.__missing_method_name = name  # Could also be a property
        return getattr(self, '__methodmissing__')

    def __methodmissing__(self, *args, **kwargs):
        # Emit method call to the log copy
        callable2 = getattr(self.stream2, self.__missing_method_name)
        callable2(*args, **kwargs)

        # Emit method call to stdout (stream 1)
        callable1 = getattr(self.stream1, self.__missing_method_name)
        return callable1(*args, **kwargs)


if __name__ == '__main__':
    logfile = file("blah.txt", "w+")

    sys.stdout = stream_tee(sys.stdout, logfile)

    print(generate_timestamp())
    print("# Now, every operation on sys.stdout is also mirrored on logfile")

    logfile.close()
