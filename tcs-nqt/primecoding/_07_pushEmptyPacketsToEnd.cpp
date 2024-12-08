#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	int solution[n];
	int k = 0;
	for(int i = 0;i < n; i++){
		if(arr[i] != 0){
			solution[k++] = arr[i];	
			cout << arr[i] << " ";
		}
	}
	
	for(;k < n; k++){
		arr[k] = 0;
		cout << arr[k] << " ";
	}
	return 0;
}
