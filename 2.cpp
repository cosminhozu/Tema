#include<iostream>
using namespace std;
int main()
{
int n,d=2,p, nr =0;
cout<<"n=";cin>>n;
cout<<"Nr de termeni: ";cin>>nr;
while(n>1)
{
p=0;
for (int i=1; i<=n,i<=nr; i++)
{
if(n%d==0)
{
p=p+1;
n=n/d;
}
}
if(p) cout<<d<<" la puterea "<<p<<endl;
d=d+1;
}
}
