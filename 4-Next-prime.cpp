#include <iostream>

using namespace std;

int isPrime(int n)
{
    int c = 1;
    while (c!=0)
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c > 1)
        {
            n++;
            c = 1;
        }
        else
        {
            c = 0;
        }
    }
    return n;
}
int main()
{
    int n;
    cin >> n;
    n++;
    cout << isPrime(n);
}
