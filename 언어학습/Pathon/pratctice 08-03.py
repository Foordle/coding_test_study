n=0
while 1:
    ps=str(input("비밀번호를 입력하세요>>>>"))
    if ps=='qwerty':
        print("비밀번호를 맞췄습니다.")
        break
    else : #비번 틀릴때
            if n>4:
                print("비밀번호 입력 횟수 초과")
                break
            n+=1
                
            
