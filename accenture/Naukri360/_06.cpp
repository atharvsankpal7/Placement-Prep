#include <iostream>
#include <algorithm>
using namespace std;

int Numberofcarry()
{
    int num1;
    int num2;
    cin >> num1 >> num2;
    int count = 0;
    while (num1 != 0 && num2 != 0)
    {
        int temp1 = num1 % 10;
        int temp2 = num2 % 10;
        if ((temp1 + temp2) >=0)
        {
            count++;
        }
        num1 = num1 / 10;
        num2 = num2 / 10;
        num1 += 1;
    }
    return count;
}
int main()
{
    cout << Numberofcarry();
    return 0;
}