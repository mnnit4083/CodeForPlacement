#include <bits/stdc++.h>
using namespace std;
int  main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	int maxi=ar[0];
	int ans=ar[0];
	for(int i=1;i<n;i++)
	{
		maxi=max(maxi+ar[i],ar[i]);
		ans=max(maxi,ans);
	}
	cout<<ans<<"\n";
	return 0;
}
