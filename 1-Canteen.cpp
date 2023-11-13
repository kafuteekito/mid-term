#include <iostream>

using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    a=a*n;
    b=b*n;
    while(b>=100)
    {
        b=b-100;
        a++;
    }
    cout<<a<<" som and "<<b<< " tyiyn";
    return 0;
}
