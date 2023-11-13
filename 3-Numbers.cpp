#include <iostream>

using namespace std;

int main()
{
    int n, a, even=0, odd=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Odds:"<<odd<<endl;
    cout<<"Even:"<<even<<endl;
    return 0;
}
