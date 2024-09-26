
import numpy as np
import matplotlib.pyplot as plt

mu, sigma = 170, 6 # mean and standard deviation
lx = np.random.normal(mu, sigma, 5000 )
myList = [round(x) for x in lx ]

##for i, w in enumerate( myList ) :
##    print "%3d = %5d" % (i,w)
mymax = max(myList)*1.3
print("mymax= ", mymax)
plt.xticks( list(range(110,200, 4)) )


plt.hist( myList, bins = 20, color = "orangered",  rwidth=0.8 )
plt.show( )
