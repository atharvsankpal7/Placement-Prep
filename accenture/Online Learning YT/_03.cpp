#include<bits/stdc++.h>
using namespace std;	

int sumOfLeaders(int arr[], int n){

	int solution = 0;
	for(int i = 0; i < n;i++){
		bool isLeader = true;

		for(int j = i + 1; j < n; j++){
			if(arr[i] <= arr[j]){
				isLeader = false;
			}
		} 
		if(isLeader){
			solution += arr[i];
		}
	}
	return solution;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n;i++){
		cin >> arr[i];
	}
	cout << sumOfLeaders(arr,n);
	return 0;
}
