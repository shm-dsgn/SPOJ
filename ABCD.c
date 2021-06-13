#include<stdio.h>
#include<string.h>
int main() 
{
    int n;
    scanf("%d\n",&n);
    char str[100000];
    gets(str);

    int len = strlen(str);
    int last = 'E';
    
    for(int i=0;i<len;i+=2) {
        if(str[i]=='A') {
            if(str[i+1] == 'B')
			{
			    if(last!='C'){printf("CD");last = 'D';}
			    else {printf("DC");last = 'C';}
			}
            if(str[i+1] == 'C')
			{
			    if(last!='B'){printf("BD");last = 'D';}
			    else {printf("DB");last = 'B';}
			}
            if(str[i+1] == 'D')
			{
			    if(last!='C'){printf("CB");last = 'B';}
			    else {printf("BC");last = 'C';}
			}
        }
        if(str[i]=='B') {
            if(str[i+1] == 'C')
			{
			    if(last!='A'){printf("AD");last = 'D';}
			    else {printf("DA");last = 'A';}
			}
            if(str[i+1] == 'D')
			{
			    if(last!='A'){printf("AC");last = 'C';}
			    else {printf("CA");last = 'A';}
			}
            if(str[i+1] == 'A')
			{
			    if(last!='C'){printf("CD");last = 'D';}
			    else {printf("DC");last = 'C';}
			}
        }
        if(str[i]=='C') {
            if(str[i+1] == 'A')
			{
			    if(last!='B'){printf("BD");last = 'D';}
			    else {printf("DB");last = 'B';}
			}
            if(str[i+1] == 'B')
			{
			    if(last!='A'){printf("AD");last = 'D';}
			    else {printf("DA");last = 'A';}}
            if(str[i+1] == 'D')
			{
			    if(last!='A'){printf("AB");last = 'B';}
			    else {printf("BA");last = 'A';}
			}
        }
        if(str[i]=='D') {
            if(str[i+1] == 'A')
			{
			    if(last!='B'){printf("BC");last = 'C';}
			    else {printf("CB");last = 'B';}
			}
            if(str[i+1] == 'B')
			{
			    if(last!='C'){printf("CA");last = 'A';}
				else {printf("AC");last = 'C';}
			}
            if(str[i+1] == 'C')
			{
			    if(last!='A'){printf("AB");last = 'B';}
			    else {printf("BA");last = 'A';}
			}
        }
    }
    printf("\n");
    return 0;
}
