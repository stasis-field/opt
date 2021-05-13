#!usr/bin/env python


import matplotlib.pyplot as plt
import numpy as np

plt.ylabel('Y axis')
plt.xlabel('X axis')

plt.axis([0,6,0,20])

plt.plot([1,2,3,4],[1,4,9,16], 'ro')


plt.show()
