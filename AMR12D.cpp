#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,flag;
    cin>>t;
    while(t-->0)
    {
        char s[10], sr[10];
        cin>>s;
        int l= strlen(s);
        strcpy(sr,s);
        int j=0;
        for(int i=l-1;i>=0;i--)
        {
            sr[j]=s[i];
            j++;
        }
        flag= strcmp(sr,s);
        if(flag==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}