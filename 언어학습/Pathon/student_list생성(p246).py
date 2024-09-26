student_list=[]
with open('학생명단.txt','rt')as file:
    file.readline()
    while True:
        line=file.readline()
        if not line:
            break
        student=line.split(',')
        student_list.append(student)

print(student_list)
