#include <iostream>
using namespace std;

int CheckPassword(char str[], int n)
{
    if (n <= 3)
    {
        return 0;
    }
    char c = str[0];
    if (isdigit(c))
    {
        return 0;
    }
    bool hasDigit = false;
    bool hasCapital = false;

    for (int i = 0; i < n; i++)
    {
        if (isupper(str[i]))
        {
            hasCapital = true;
        }
        if (isdigit(str[i]))
        {
            hasDigit = true;
        }
        if (str[i] == ' ' || str[i] == '/')
        {
            return 0;
        }
    }
    return hasDigit && hasCapital;
}

int main()
{
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    cout << CheckPassword(str, n) << endl;
}
