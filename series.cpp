#include<iostream>
using namespace std;
int main()
{
int i,n,sum=0;
cout<<"Enter length of series: ";
cin>>n;
for(i=1;i<=n;i++)
{
if(i==1)
cout<<"1+ ";
else if(i==n)
cout<<"1/"<<i;
else
cout<<"1/"<<i<<" + ";
}
return 0;
}
