#include<stdio.h>
#define mod 10000007

long long int p(long long int x,long long int y)
{
    long long int ans =1;
    while(y>0)
    {
    	if(y%2)
    	ans = (ans * x) % mod;
    	x=(x*x)%mod;
        y=y>>1;
    }
    return ans;
}

int main()
{
    long long int n,k;
    while(1)
    {
        scanf("%lld%lld",&n,&k);
        if(n==0 && k==0 )
            return 0;
        else
        {
            long long int s1, s2,s3,s4;
            s1 = (2 * p(n-1,n-1) ) % mod;
            s2 = (2 * p(n-1,k) ) % mod;
            s3 = p(n,k);
            s4 = p(n,n);
            long long int s = (s1 + s2 +s3 + s4) % mod;
            printf("%lld\n",s);
        }
    }

}
