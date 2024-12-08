#include<bits/stdc++.h>
using namespace std;

int main(){
	int sum;
	cin >> sum;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	if(n < 2){
		return -1;
	}
	sort(arr,arr + n);
	for(int i = 0; i < n - 1; i++){
		if(arr[i] + arr[i + 1] > sum){
			return 0;
		}
		else{
			cout << arr[i] * arr[i +1];
			return arr[i] * arr[i + 1];
		}
		
	
	}
	return 0;
}

