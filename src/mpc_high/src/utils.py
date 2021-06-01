import os
import stream_tee as stream_tee
import __main__ as main
from datetime import datetime


def get_model_dir():
    if not os.path.exists('checkpoints'):
        os.makedirs('checkpoints')

    name = experiment_name()

    return os.path.join('checkpoints', name) + '/'

def experiment_name():

    experiment = os.path.splitext(os.path.split(main.__file__)[1])[0]
    name = experiment + '_' + stream_tee.generate_timestamp()
    return name

def write_mat(dir, data_dict,filename):
    filename=filename+'.mat'
    timestamp = datetime.now()
    str_time = timestamp.strftime('_%H_%M')
    name='experiment'+str_time
    folder_name = dir
    if not os.path.exists(folder_name):
        os.makedirs(folder_name)
    filename=os.path.join(folder_name, filename)
    with open(filename, 'wb') as f:
        scipy.io.savemat(f, data_dict)
    print("Printed .mat files in "+folder_name)


