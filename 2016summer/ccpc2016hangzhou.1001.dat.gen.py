#coding:utf8
import random

def seq(n, s):
    # n个数和是s
    br = []
    for i in xrange(n):
        b = None
        while(b == None or b in br):
            b = random.randint(1, s)
        br.append(b)
    br.sort()
    ans = [br[0]]
    for i in xrange(n - 1):
        ans.append(br[i+1] - br[i])
    return ans

def datagen():
    fo = open("foo.txt", "w+")
    freedom = 10
    for av in xrange(20, 23):
        for k in xrange(20, 30):
            # 分成k组，总共tot个
            tot = (av + freedom) * k
            l = seq(k, tot)
            line = ' '.join([str(x) for x in l])
            fo.write("{} {}\n".format(k, k))
            fo.write("{}\n".format(line))
    fo.close()

datagen()