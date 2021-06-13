#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int i;
    long long int h[n];
    for(i=0;i<n;i++)
	{
      cin>>h[i];
    }
    sort(h,h+n);
    
    long long int ans=1000000001;
    for(i=0;i<=n-k;i++)
	{
      ans=min(ans,h[i+k-1]-h[i]);
    }
    cout<<ans<<"\n";
  }
}
