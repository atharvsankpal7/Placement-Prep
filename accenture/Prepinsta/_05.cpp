#include<iostream>
using namespace std;

int findCount(int arr[], int length, int num, int diff){
	
	int count = 0;
	for(int i = 0; i < length; i++){
		if(abs(num - arr[i]) <= diff){
			count++;
		}
	}

	if(count == 0){
		return -1;
	}

	return count;
}

int main(){
	int length;
	cin >> length;
	int arr[length];
	for(int i = 0; i< length; i++){
		cin >> arr[i];
	}
	int num;
	cin >> num;
	int diff;
	cin >> diff;

	cout << findCount(arr, length, num, diff);
}
