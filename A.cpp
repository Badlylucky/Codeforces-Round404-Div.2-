#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int ans=0;
	string r[200000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>r[i];
	}
	for(int i=0;i<n;i++)
	{
		if(r[i]=="Tetrahedron")
		{
			ans+=4;
		}else if(r[i]=="Cube"){
			ans+=6;
		}else if(r[i]=="Octahedron"){
			ans+=8;
		}else if(r[i]=="Dodecahedron"){
			ans+=12;
		}else if(r[i]=="Icosahedron"){
			ans+=20;
		}else{

		}
	}
	cout<<ans<<endl;
	return 0;
}