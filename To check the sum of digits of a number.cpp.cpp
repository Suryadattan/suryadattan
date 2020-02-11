#include <iostream>
using namespace std;
int main()
{
	int n,s=0,r;
	cout<<"ENTER A NUMBER:\n";
	cin>>n;
	while (n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	cout<<"\n THE SUM OF DIGHITS="<<s;
	return 0;
}

