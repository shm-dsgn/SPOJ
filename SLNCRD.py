def price(N) :
    p = ((N*(N+1)*(N+2)) // 6) % 1000000007
    print(p)
    #print('\n')

T = int(input())
while(T > 0) :
    N = int(input())
    price(N)
    T -= 1
