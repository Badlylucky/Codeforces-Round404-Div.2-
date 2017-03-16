#include <iostream>

using namespace std;

long long n,m;

bool check(long long x)
{
	long long sum = (1+x)*x/2;
	if(sum>=n-m)
	{
		return true;
	}else{
		return false;
	}
}

int main()
{
	long long ans=0;
	long long high = 6000000000;
	long long low = 0;
	long long mid;
	cin>>n>>m;
	if(n<=m)
	{
		ans = n;
	}else{
		while(high>low)
		{
			mid = (high+low)/2;
			if(check(mid)==true)
			{
				if(high==mid)
				{
					high = mid-1;
				}else{
					high = mid;
				}
			}else{
				if(low==mid)
				{
					low = mid+1;
				}else{
					low = mid;
				}
			}
			cerr<<high<<mid<<low<<endl;
		}
		ans = low + m;
	}
	cout<<ans<<endl;
	return 0;
}
