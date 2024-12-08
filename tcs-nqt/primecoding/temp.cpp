#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    int targetSum;
    cin >> targetSum;  // Read the target sum
    int temp;
    while (cin >> temp) {
        arr.push_back(temp);  // Read array elements
    }

    unordered_map<int, int> mp;
    int currSum = 0;
    int solution = 0;

    // Iterate over the array to find subarrays with sum equal to targetSum
    for (int i = 0; i < arr.size(); i++) {
        currSum += arr[i];  // Maintain the running sum

        // Check if current sum equals targetSum
        if (currSum == targetSum) {
            solution++;
        }

        // Check if there exists a prefix subarray with sum that makes the rest equal to targetSum
        if (mp.find(currSum - targetSum) != mp.end()) {
            solution += mp[currSum - targetSum];
        }

        // Record the current sum in the map
        mp[currSum]++;
    }
    cout << solution << endl;  // Output the number of subarrays with the desired sum
    return 0;
}

