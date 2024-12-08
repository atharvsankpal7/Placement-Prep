#include <stdio.h>
#include <stdbool.h>
int Checkpassword(char str[], int n)
{
    if (n < 4)
    {
        return 0;
    }
    if (str[0] - '0' >= 0 && str[0] - '0' <= 9)
    {
        return 0;
    }
    bool hasDigit = false;
    bool hasCapital = false;
    for (int i = 0; i < n; i++)
    {
        char c = str[i];
        if(c - '0' >= 0 && c - '0' <= 9){
            hasDigit = true;
        }
        else if(c >= 'A' && c <= 'Z'){
            hasCapital = true;
        }
        else if(c == '/' || c == ' '){
            return 0;
        }
    }
    return hasCapital && hasDigit;
    
}
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);
    printf("%d\n", Checkpassword(str, n));
    return 0;
}