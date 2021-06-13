#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);

	while(T --> 0)
	{
		unsigned long long int N ;
		scanf("%llu",&N);
	    unsigned long long int i, m = 1000000007 , a , N1 = (N + 1) , N2 = (N + 2);
	    if(N % 2 == 0)
	    {
	    	N = N / 2;
	    }
	    else if(N1 % 2 == 0)
	    {
	    	N1 = N1 / 2;
	    	
	    }
	    else if (N2 % 2 == 0)
	    {
	    	N2 = N2 / 2;
	    }

		if(N % 3 == 0)
	    {
	    	N = N / 3;
	    }
	    else if(N1 % 3 == 0)
	    {
	    	N1 = N1 / 3;
	    	
	    }
	    else if (N2 % 3 == 0)
	    {
	    	N2 = N2 / 3;
	    }

		a = N % m ;
		i = N1 % m ;
		i = (i * a) % m ;
		a = N2 % m ;
		i = (i * a) % m ;
	    printf("%llu\n",i);
	}
	return 0 ;
}
