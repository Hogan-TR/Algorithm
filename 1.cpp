a = int(input())
s = str(input())
z = 0
o = 0
t = 0
for i in s:
    if i == '0':
        z += 1
    if i == '1':
        o += 1
    if i == '2':
        t += 1
num = a // 3
zn = num - z
on = num - o
tn = num - t
if z == o == t:
    print(s)
else:
    zm = 0
    om = 0
    tm = 0
    s = list(s)
    for i in range(0, a):
        if s[i] == '2':
            if tn < 0:
                if zn > 0:
                    s[i] = '0'
                    zn -= 1
                    tn += 1
                else:
                    s[i] = '1'
                    on -= 1
                    tn += 1
        if s[i] == '1':
            om += 1
            if on < 0:
                if zn > 0:
                    s[i] = '0'
                    zn -= 1
                    on += 1
                    om -= 1
                else:
                    if om <= num:
                        continue
                    else:
                        s[i] = '2'
                        tn -= 1
                        on += 1
        if s[i] == '0':
            zm += 1
            if zn < 0:
                if zm <= num:
                    continue
                else:
                    if on > 0:
                        on -= 1
                        s[i] = '1'
                        zn += 1
                    else:
                        s[i] = '2'
                        tn -= 1
                        zn += 1
    s = ''.join(s)
    print(s)
//		python 版本