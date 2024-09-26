

while 1:
    s=int(input("이번영화의 평점을 입력하세요>>>>"))
    if 1<=s<=5 :
        print('★'*s)
        break
    else:
        print('평점은 1~5 사이만 입력 가능합니다.')
    
