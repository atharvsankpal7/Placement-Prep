#include <iostream>
#include <math.h>
using namespace std;
bool isPalindrome(int n)
{
    int length = ((log10(n) + 1) / 2);
    int temp = 0;
    for (int i = 0; i < length; i++)
    {
        temp = temp * 10 + n % 10;
        n = n / 10;
    }
    return n == temp || n/10 == temp;
}
int main()
{
   
    return 0;
}