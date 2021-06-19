#include<stdio.h>
#include<string.h>
char str[10],str1[4],str2[4],str3[4];

int main()
{
    int i,j,no_X,no_O,flag,win_X,win_O;

    while(1)
    {
    	scanf("%s",str);
    	if(strcmp(str, "end")==0)
		break;
        no_X = no_O = flag = win_X = win_O = 0;
        for(i=0;    i<9;    i++)
        {
            if(str[i] == 'X')
                no_X++;
            else if(str[i] == 'O')
                no_O++;
        }

        if(str[4] != '.')
        {
            if(str[4] == 'O')
            {
                if((str[0] == 'O' && str[8] == 'O') || (str[1] == 'O' && str[7] == 'O') || (str[2] == 'O' && str[6] == 'O') || (str[3] == 'O' && str[5] == 'O'))
                    win_O = 1;
            }
            else
            {
                if((str[0] == 'X' && str[8] == 'X') || (str[1] == 'X' && str[7] == 'X') || (str[2] == 'X' && str[6] == 'X') || (str[3] == 'X' && str[5] == 'X'))
                    win_X = 1;
            }
        }

        if(str[0] != '.')
        {
            if(str[0] == 'O')
            {
                if((str[3] == 'O' && str[6] == 'O') || (str[1] == 'O' && str[2] == 'O'))
                    win_O =1;
            }

            else
            {
                if((str[3] == 'X' && str[6] == 'X') || (str[1] == 'X' && str[2] == 'X'))
                    win_X =1;
            }
        }

        if(str[8] != '.')
        {
            if(str[8] == 'O')
            {
                if((str[5] == 'O' && str[2] == 'O') || (str[7] == 'O' && str[6] == 'O'))
                    win_O = 1;
            }
            else
            {
                if((str[5] == 'X' && str[2] == 'X') || (str[7] == 'X' && str[6] == 'X'))
                    win_X = 1;
            }
        }

        if(win_X == 1 && win_O == 1)
            flag = 1;

        else
        {
            if(win_X == 1 && win_O == 0 && no_X != no_O + 1)
                flag = 1;

            else if(win_X == 0 && win_O == 1 && no_X != no_O)
                flag = 1;

            else if(no_X != no_O+1 && no_X != no_O)
            {
                flag = 1;
            }
        }
        if(win_X!=1&&win_O!=1)
		{
			if(no_X+no_O!=9)
			flag=1;
		}


        if(flag)
            printf("invalid\n");
        else
            printf("valid\n");

    }
    return 0;
}

