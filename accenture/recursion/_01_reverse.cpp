#include <iostream>
using namespace std;

long long reverse(long long a, long long b)
{
    if (a == 0)
    {
        return b;
    }
    b = b * 10 + (a % 10);
    return reverse(a / 10, b);
}
long long rev(long long n, long long r)
{
    if (n == 0)
    {
        return r;
    }
    long long dig = n % 10;
    r = r * 10 + dig;
    return rev(n / 10, r);
}
int main()
{
    cout << rev(1234000568790, 0);
    return 0;
}