#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string n;
    cin >> n;
    unordered_map<char, int> freq;
    for (char c : n)
    {
        freq[c]++;
    }
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] != '0')
        {
            if (freq[i + '0'] == n[i] - '0')
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}