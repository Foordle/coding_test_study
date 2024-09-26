
# practice07-03

num=int(input("몇개의 과일을 보관할까요?>>>>"))
li=[]
for n in range(num):
    fruit=input("{}번째 과일을 입력하세요>>>".format(n+1))
    li.append(fruit)

print("입력받은 과일은{}입니다.".format(li))
