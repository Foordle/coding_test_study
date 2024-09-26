
import numpy as np
import matplotlib.pyplot as plot

plot.figure(figsize=(8,7))

N = 10000
mu1, sigma1 = 500000, 250000                # mean and standard deviation
x1 = np.random.normal(mu1, sigma1, N )
y1 = np.random.normal(mu1, sigma1, N )
ix = [max(round(w),1) for w in x1 ]      # 1보다 큰 정수로 바꿈.
iy = [max(round(w),1) for w in y1 ]

##for p in zip(ix, iy) :
##    print(p)

plot.ylim(0, 3*mu1)
plot.xlim(0, 3*mu1)
plot.plot(ix, iy, '.')
#plt.axis('equal')
plot.show()
