

import matplotlib.pyplot as plt
import numpy as np

y = np.random.randn(1000)

n, bins, patches = plt.hist(y, 20, rwidth=0.9) # histogram을 20개로 나눈다.

print("n=", n)
print("sum(n)=", sum(n))
print("bins=", bins)

plt.show()