#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long n,m;
	long long ans = 0;
	long long last = 0;
	bool flag=true;
	cin>>n>>m;
	last = n;
	if(n<=m)
	{
		m=n;
		flag = false;
	}
	ans += m;
	while(last>0)
	{
		ans++;
		last += m;
		if(last>n)
		{
			last=n;
		}
		last -= ans;
	}
	cout<<ans<<endl;
	return 0;
}