import numpy as np
#import numpy
#from numpy import *

phone_map = np.zeros((10,10),"10str")

def search_box(i,j,p,q) :
    result = list();
    for k in range(i-p,i+p) :
        for l in range(j-q,j+q) :
            if phone_map[k][l]!="" :
                result.append(phone_map[k][l])
    return result


L = 2

phone_map[3][7]='Gildong'
phone_map[4][6]='Cheulsu'
phone_map[1][2]='Yunha'
phone_map[8][2]='Pitter'
phone_map[3][4]='John'
phone_map[9][9]='Suji'


print(phone_map)
print(search_box(3,6,L,L))