#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int bit[200001],n;

int sum(int i)
{
	int s=0;
	while(i>0)
	{
		s+=bit[i];
		i-=(i&-i);
	}
	return s;
}

void add(int i,int x)
{
	while(i<=n)
	{
		bit[i]+=x;
		i+=(i&-i);
	}
}

int main()
{
	int q;
	memset(bit,0,sizeof(bit));
	int ar[200000];
	int sw[50000][2];
	int temp;
	long long ans=0;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		ar[i]=i+1;
	}
	for(int i=0;i<q;i++)
	{
		cin>>sw[i][0]>>sw[i][1];
	}
	for(int i=0;i<q;i++)
	{
		ans = 0;
		temp = ar[sw[i][1]-1];
		ar[sw[i][1]-1] = ar[sw[i][0]-1];
		ar[sw[i][0]-1] = temp;
		for(int j=0;j<n;j++)
		{
			ans += (long long)j - sum(ar[j]);
			add(ar[j],1);
		}
		cout<<ans<<endl;
		ans = 0;
		memset(bit,0,sizeof(bit));
	}
	return 0;
}