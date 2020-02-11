#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
char s[20];
int i;
cout<<"ENTER A STRING:\t";
cin.getline(s,20);
for(i=0; s[i] !='\0';i++);
cout<<"\n";
cout<<"THE LENGHT OF THE STRING IS\t"<<i;
return 0;
} 
