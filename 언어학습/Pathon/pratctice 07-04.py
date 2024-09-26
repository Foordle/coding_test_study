#practice07-04


exam=[99,78,100,91,81,85,54,100,71,50]
score=[]
for n in range(len(exam)):
    score.append(exam[n]+5)
    if score[n]>=100:
        score[n]=100
print(score)
