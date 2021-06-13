#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    while(p--)
    {
        unsigned long long int n,k,m,s=1,t=0;
        scanf("%llu %llu %llu",&n,&k,&m);
        if(n>m)
            printf("0\n");
        else
        {
		   while(s<=m/n)
            {
                s=s*k;
                if(s<=m/n)
                    t++;
            }
            printf("%llu\n",t);
        }
    }
    return 0;
}
