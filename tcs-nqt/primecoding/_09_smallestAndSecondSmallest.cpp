#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	int smallest = INT_MAX;
	int second_smallest = INT_MAX;
	for(int i = 0;i < n; i++){
		if(arr[i] < smallest){
			second_smallest = smallest;
			smallest = arr[i];
		}else if(arr[i] > smallest && arr[i] < second_smallest){
			second_smallest = arr[i];
		}
	}

	cout << smallest << " " << second_smallest << endl;
	return 0;
}
