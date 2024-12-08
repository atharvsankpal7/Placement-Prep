#include<bits/stdc++.h>
using namespace std;


int sumOfLeaders(int arr[], int n){
	
	if(n == 0){
		return -1;
	}

	int sum = 0;
	for(int i = 0; i < n; i++){
		bool isLeader = true;
		for(int j = i + 1; j < n ;j++){
			if(arr[i] <= arr[j]){
				isLeader = false;
			}
		}
		if(isLeader){
			sum += arr[i];
		}
	}
	return sum;


} 
int main(){

	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	cout << sumOfLeaders(arr, n) << endl;


	return 0;

}
