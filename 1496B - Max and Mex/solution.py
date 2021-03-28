import math


def mex(List: list):
    min: int = 0
    while(min in List):
        min = min + 1
    return min


def slove():
    n, k = [int(i) for i in input().split()]
    l: list[int] = [int(i) for i in input().split()]
    maxValue: int = max(l)
    mexValue: int = mex(l)

    while k > 0:
        x = math.ceil((maxValue + mexValue) / 2)
        if x == maxValue:
            print("Answer: ", len(l))
            return
        if not x in l:
            maxValue = x if maxValue < x else maxValue
            mexValue = maxValue + 1 if maxValue == x else mexValue
            l.append(x)
            n = n + 1
        k = k - 1
        mexValue = mex(l) if mexValue == x else mexValue
        if maxValue == len(l) - 1:
            print("Answer: ", n + k)
            return
        if mexValue == 0 and x == math.ceil(maxValue / 2):
            print("Answer: ", len(l))
            return
    print("Answer: ", n)


t: int = int(input())

while t > 0:
    slove()
    t = t - 1
