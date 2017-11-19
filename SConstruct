import os
env = Environment(ENV = {'PATH' : os.environ['PATH'],
                         'HOME' : os.environ['HOME']})

env.StaticLibrary('MathLib', 'lib.cpp', srcdir='mathLib')

env.Program('main', 'main.cpp', LIBS=['MathLib'], LIBPATH='.')
