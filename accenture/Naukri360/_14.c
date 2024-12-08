#include <stdio.h>
#include <string.h>

char *ChatFrequentcharacter(char *str, char x)
{
    char *solution = str;
    int arrL = 120 - 65;
    int freq[arrL];
    for (int i = 0; i < arrL; i++)
    {
        freq[i] = 0;
    }

    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        freq[str[i] - 'A']++;
    }
    int maxFreq = -1;
    int index = -1;
    for (int i = 0; i < arrL; i++)
    {
        if (maxFreq < freq[i])
        {
            maxFreq = freq[i];
            index = i;
        }
    }
    char charToChange = index + 'A';
    for (int i = 0; i < n; i++)
    {
        char c = str[i];
        if (c == charToChange)
        {
            str[i] = x;
        }
    }
    return str;
}

int main()
{
    char c;
    scanf("%c",&c);
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s",str);// array is automatically referenced to the first element no need to provide addresss
    
    printf("%s\n",ChatFrequentcharacter(str,c));
    return 0;
}