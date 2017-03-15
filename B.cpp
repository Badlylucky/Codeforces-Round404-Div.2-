#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m;
	int ans;
	int l1[200000];
	int r1[200000];
	int l2[200000];
	int r2[200000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>l1[i]>>r1[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>l2[i]>>r2[i];
	}
	sort(l1,l1+n,[](int x,int y) -> int {return (x>y);});
	sort(l2,l2+m,[](int x,int y) -> int {return (x>y);});
	sort(r1,r1+n);
	sort(r2,r2+m);
	//cerr<<l1[0]<<l2[0]<<r1[0]<<r2[0]<<endl;
	ans = max(l1[0]-r2[0],l2[0]-r1[0]);
	if(ans<0)
	{
		ans=0;
	}
	cout<<ans<<endl;
	return 0;
}