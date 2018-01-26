#include <iostream>
using namespace std;
int a,b,x,y,r;
int main()
{
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    x=a;
    y=b;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    if(b==1)
    cout<<"DA";
    else cout<<"NU";
}
