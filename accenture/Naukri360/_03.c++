#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    string output = s1 == s2 ? "Yes" : "No";
    cout << output;
    return 0;
}