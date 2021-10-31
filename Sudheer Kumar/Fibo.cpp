#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=1,b=1,c;
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<"1"<<endl;
        return 0;
    }
    for(int i=3;i<n;i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    cout<<c<<endl;

    return 0;
}
