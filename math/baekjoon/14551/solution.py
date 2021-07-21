def solution():
    n, m = map(int, input().split())
    ans = 1
    for i in range(n):
        temp = int(input())
        
        if temp != 0:
            ans = ans * temp

    print(ans % m)