#include <iostream>

using namespace std;

int main()
{
    int n, n1, n2, n3, n4, n5, n6;
    cin>>n;
    n1=n/100000%10;
    n2=n/10000%10;
    n3=n/1000%10;
    n4=n/100%10;
    n5=n/10%10;
    n6=n%10;
    if(n1+n2+n3 == n4+n5+n6)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
