
#include <iostream>
#include <algorithm>
using namespace std;
int productSmallPair()
{
    int sum;
    cin >> sum;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int sum1 = arr[0] + arr[1];
    if (sum1 < sum)
    {
        return arr[0] * arr[1];
    }
    return 0;
}
int main()
{
    cout << productSmallPair();
}