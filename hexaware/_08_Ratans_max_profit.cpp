#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
//	auto [minItr, maxItr] = minmax_element(arr, arr + n);
	pair<int*, int*> result = minmax_element(arr, arr + n);
	int maxPrice = *result.second;
	int minPrice = *result.first;

	cout << maxPrice - minPrice << endl;

	return 0;
}
