#include <iostream>
using namespace std;
int main()
{
	int n,rev=0,rem,i;
	cout<<"\n ENTER A NUMBER:";
	cin>>n;
	for(i=n; i>0; i=i/10)
	{
		rem=i%10;
		rev=rev*10+rem;
	}
	if(rev==n)
	cout<<"NUMBER IS PALINDROME";
	else
	cout<<"NUMBER IS NOT PALINDROME";
	return 0;
}	
