from matplotlib import pyplot as plt
import numpy as np

def plot1graph(OX,OY):
   # OY=[1.,1.,1.,1.,1.,1.]
   # OX=[0.,0.5,1.0,1.5,2.0,2.5]
   # OY=np.array(OY)	
   # OX=np.array(OX)
    plt.subplot(211)
    plt.plot(OX,OY,label="Graph")
    plt.legend(bbox_to_anchor=(0., 1.02, 1., .102), loc=3,
               ncol=1, mode="expand", borderaxespad=0.)
    plt.grid()
    plt.savefig('OneGraph.png')

    plt.show()
    return True

def add(i,j):
    return i+j
