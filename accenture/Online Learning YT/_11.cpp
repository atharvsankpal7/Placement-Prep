#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    unordered_map<char, int> mp;
    int maxCount = 0;
    int l = 0;
    
    for (int r = 0; r < str.size(); ++r) {
        mp[str[r]]++;
        
        // Adjust the left boundary if we have more than one occurrence of a character
        while (mp[str[r]] > 1) {
            mp[str[l]]--;
            l++;
        }
        
        // Update maxCount with the size of the current valid window
        maxCount = max(maxCount, r - l + 1);
    }
    
    cout << maxCount << endl;
    return 0;
}

