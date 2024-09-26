'''
#리스트 인덱싱 마지막거 혹시 인덱스 넘어가면???
lst1 = [0,1,2,3,4,5,6,7]
for i in range(len(lst1)-3):
    print(lst1[i:i+4])
'''

'''
#리스트 인덱싱 마지막거 혹시 인덱스 넘어가면???
for w in range(4,7):
    print(w)
출력 4, 5, 6
'''
'''
#문자열에서 문자열 여러개 찾기
si=input().split()
print(si)
genome ="""ATATAATATAATATAATATAATATA
GTGTIATATAATATAATATA
GTGTIATATAATATAATATA
GTGTIATATAATATAATATA
GTGTIATATAATATAATATA
GTGTIATATAATATAATATA"""

a = genome.find(si[0])
print(a)
while genome[a+1:].find(si[0]) != -1:
    a = genome[a+1:].find(si[0]) + a + 1
    print (a)
'''
'''
#위에꺼 함수화
def Check_G(B_l,S_l):
    result = []
    for i in range(len(S_l)):
        a = B_l.find(si[i])
        result.append(a)
        while B_l[a+1:].find(S_l[i]) != -1:
            a = B_l[a+1:].find(S_l[i]) + a + 1
            result.append(a)
    return result
'''
'''
lst=[]
if lst == []:
    print(0)
    '''
'''
def F_endindex(index,string):
    endindex = index + len(string)
    return endindex
print(F_endindex(3,"qwertyu"))
'''
'''
lst1=[0,1,2,3,4,5,6,7]
w=1
for i in range(len(lst1)):
    if lst1[i]<lst1[i+1]: lst1.pop()
    print(lst1)
'''
'''
#find 메소드 구동-->불가능
lst1=["rksk","ekfk","akqk"]
lst2="rkektkdkgkfkwlekdifkrkrkskekfkakqktkek"
print(lst2.find(lst1))
'''

'''
#이중리스트 len실험-->성공
lst=[[0,564644546],[5,465482641],[3,684841654],[2,4646546],[1,789784]]
print(type(lst))
print(len(lst))
'''

'''
#이중 리스트 sorting
lst=[[0,564644546],[5,465482641],[3,684841654],[2,4646546],[1,789784]]
print(lst)
lst.sort()
print(lst)
'''

'''
#함수 체크
def F_endindex(start_index,string):
    end_index = start_index + len(string)-1
    return end_index
# 함수, B_l에서 string 찾아 [첫번쨰 인덱스, 마지막 인덱스] 의 이중 리스트 추가
def Check_G(B_l,string,lst):
    start_index = B_l.find(string)
    if start_index != -1 :
        end_index   = F_endindex(start_index,string)
        lst.append([start_index, end_index])
        while B_l[start_index+1:].find(string) != -1:
            start_index = B_l[start_index+1:].find(string) + start_index + 1
            end_index   = F_endindex(start_index,string)
            lst.append([start_index, end_index])
            lst.sort()

genome="""ATAGCTTCAAAGCTCCAGGTGGTCCTTCTAAATAGCGCCTAAGCAGCTTC
CTTATGACAGGGTGTCGGCGATTATTTATCTCTGTGTTCTATTTTTAAGC
AAGTTGTCATCATTGAAATAGAGAACTCATTTTTTTGTTTTTTGTATTTC
TTCTTTTTTTTGTATGCATTTTTATTTGTGAACTGTAAATTTTCATAACG
TTCACAGAGTTTTAAATAATTTACAGTTAAATCAAAATCACTTCACTACA
TATTGCTACTTCAAATAACTAATCTAACTGGAGTAGTGGTGTTAAACAGG
AATCACGAGGCGAAGAAATCCAGTACGTGTAAACGAGCGAACGAATGAGA
TTATCAGTTATATTTTCATCGTCATTGTCGCGTGGACAATACACTAAACA
TATCGCTAAAGCTTCATCTACACGATTAGCGAAAATTTTATATGGAATTG
ACACCTCGCACGCAGATTTCTGCATACGATTGCACATTGTGAACAAATAT
GCTATTCGTGTATAAACGCCTTAAAACACATGGGTGGTCGAAT"""
genome=genome.replace("\n", "")
si   = input().split()
ei   = input().split()
L_si=[]
L_ei=[]
result=[]
#L_si , L_ei 작성
for i in range(len(si)): Check_G(genome,si[i],L_si)
for i in range(len(ei)): Check_G(genome,ei[i],L_ei)
#result 작성
if L_si==[] or L_ei==[]: print("None")
else:
    L_si.append([L_ei[-1][0]+1,0])
    for i in range(len(L_si)-1):
        for w in range(len(L_ei)):
            if L_si[i][1]<L_ei[w][0]<L_si[i+1][0]:
                result.append([L_si[i][0],L_ei[w][1]])
                break
    print(result)
    #제일 짧은 아이 작성
    if len(result) != []:
        check=0
        for i in range(len(result)-1):
            if (result[i][1]-result[i][0]) > (result[i+1][1]-result[i+1][0]) : check = i+1
        print(genome[result[check][0]:result[check][1]+1])
    else:
        print("None")
'''
'''
#문자 아스키 코드로 변환(ord함수)
print(type(ord("A")))
'''
'''
if ord("a") > ord("ab"): print(1)
'''
'''
#result 작성
if L_si==[] or L_ei==[]: print("None")
else:
    L_si.append([L_ei[-1][0]+1,0]) #L_si[-1][]을 위한 안배
    for i in range(len(L_si)-1):
        for w in range(len(L_ei)):
            if L_si[i][1] < L_ei[w][0] < L_si[i+1][0]:
                result.append([L_si[i][0],L_ei[w][1]])
                break
    #제일 짧은 아이 작성
    if result != []:
        check=0
        for i in range(len(result)-1):
            if (result[i][1]-result[i][0]) > (result[i+1][1]-result[i+1][0]) : check = i+1
        print(genome[result[check][0]:result[check][1]+1])
    else:
        print("None")
f.close()
'''
'''
    #제일 짧은 아이 작성
    if result != []:
        My_l = []
        check=0
        for i in range(len(result)-1):
            if (result[check][1]-result[check][0]) > (result[i+1][1]-result[i+1][0]) : check = i+1
            elif (result[check][1]-result[check][0]) == (result[i+1][1]-result[i+1][0]) :
                My_l.append(genome[result[check][0]:result[check][1]+1])
                check = i+1
            My_l.append(genome[result[check][0]:result[check][1]+1])
        My_l.sort()
        print(My_l[0])
    else: print("None")
f.close()
'''
'''
#집합 갯수도 len으로??  ok
Set ={4,204,6,43,55}
s = len()
print(s)
'''
'''
#dict
Dict = {"k1":("d", "f", "d")}
print(Dict["k1"])
'''
