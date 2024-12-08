#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    sort(arr.begin(),arr.end(),[&](int a,int b){
        if(freq[a] == freq[b]){
            return a < b;
        }
        return freq[a] > freq[b];
    });
    std::cout << arr[0];

    return 0;
}