# 내가 푼 답 while 사용
'''
def vending_machine(money):
    n=0
    while 1:
        if money-n*700>=0:
            print('음료수={}개, 잔돈={}원'.format(n,money-n*700))

        else:
            break

        n+=1


vending_machine(3000)

'''


# 모범 답안 range 사용

def vending_machine(money):
    n=0
    loopcount=money//700
    for i in range(loopcount+1):
        print('음료수={}개, 잔돈={}원'.format(n,money))
        n+=1
        money-=700


vending_machine(3000)
