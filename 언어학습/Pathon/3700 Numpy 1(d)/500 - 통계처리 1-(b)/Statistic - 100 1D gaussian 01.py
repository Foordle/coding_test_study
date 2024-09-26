
import numpy as np
import matplotlib.pyplot as plt

mu, sigma = 100, 30 # mean and standard deviation
x = np.random.normal(mu, sigma, 100)
y = np.random.normal(mu, sigma, 100)

for p in zip(x,y) :
    print( "%10.3f  %10.3f" % p)
