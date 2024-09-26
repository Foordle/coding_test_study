print("점수를 입력하세요 더 이상 입력할 점수가 없음 음수를 아무거나 입력하세요")
li=[]
while 1:


    score=int(input("점수 입력>>>"))

    if score<0:
        print("평균 = {}, 최대 = {}, 최소 = {}".format(sum(li)/len(li), max(li),min(li)))
        break
    
    li.append(score)

