for x in range(int(input())):
    input()
    string=input().strip()
    import re
    txt=string
    x = re.findall(r"[bcdfghjklmnpqrstvwxyz]{4,}", txt)
    if x:
        print('NO')
    else:
        print('YES')