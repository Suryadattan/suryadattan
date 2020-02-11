#include <iostream>
using namespace std;
int main()
{
	int s=0,i,n;
	cout<<"ENTER NUMBER OF TERMS:";
	cin>>n;
	for(i=1;i<=n;i++)
	s=s+i*i;
	cout<<"SUM OF SQUARES:"<<s;
	return 0;
}
