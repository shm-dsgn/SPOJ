def _main_() :
    T = int(input())
    while( T > 0) :
        S = input()
        rev = S[::-1]
        
        if rev == S : print("YES")
        else : print("NO")
        T -= 1

_main_()
