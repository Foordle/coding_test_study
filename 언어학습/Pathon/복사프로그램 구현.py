buffer_size=1024 #1024byte로 1kb의미

with open('copy_practice.png','rb')as source:
    with open('copy_practice2.png','wb')as copy:
        while True:
            buffer=source.read(buffer_size)
            if not buffer: # if buffer==''
                break

            copy.write(buffer)


print('파일이 복사 되었습니다')
