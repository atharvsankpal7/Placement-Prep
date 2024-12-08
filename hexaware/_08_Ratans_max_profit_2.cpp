#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Use std::minmax_element to find the minimum and maximum elements
    auto [minIt, maxIt] = minmax_element(arr, arr + n);
    int minPrice = *minIt;
    int maxPrice = *maxIt;

    cout << maxPrice - minPrice << endl;

    return 0;
}

