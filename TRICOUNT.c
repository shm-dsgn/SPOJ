#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T-->0)
	{
		unsigned long long int N,s;
		scanf("%llu",&N);
		s=(N*(N+2)*((2*N)+1))/8;
		printf("%llu\n",s);
	}
	return 0;
}
