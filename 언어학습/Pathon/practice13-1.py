nation=['그리스','아네테','독일', '베를린', '러시아', '모스크바', '미국', '워싱턴']
file=open('nation.txt','wt')
n=0
for n in range(0,8,2):
    file.write('{}-{}\n'.format(nation[n],nation[n+1]))

file.close()
