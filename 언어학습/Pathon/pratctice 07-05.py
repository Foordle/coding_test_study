#practice07-05
li=[]
for n in range(100):
    if n//10==3 or n//10==6 or n//10==9:
        if n%10==3 or n%10==6 or n%10==9:
            li.append('짝짝')
        else:
            li.append('짝{}'.format(n%10))
    else:
        if n%10==3 or n%10==6 or n%10==9:
            li.append('{}짝'.format(n//10))
        else:
            li.append(n)
print(li)
