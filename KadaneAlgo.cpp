#include <bits/stdc++.h>
using namespace std;
int  main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	//initialize maximum as the first element of array
	// and answer too
	int maxi=ar[0];
	int ans=ar[0];
	for(int i=1;i<n;i++)
	{	//either element will contribute to continuios sum or not
		maxi=max(maxi+ar[i],ar[i]);
		// pick the maximum till now
		ans=max(maxi,ans);
	}
	cout<<ans<<"\n";
	return 0;
}
