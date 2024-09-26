#practice07-2

n=int(input("양의 정수를 입력하세요>>>"))

sum=0

for m in range(1,n+1,):
    sum=sum+m
    

print("1부터{}까지의 모든 정수의 합은{}입니다".format(n,sum))
