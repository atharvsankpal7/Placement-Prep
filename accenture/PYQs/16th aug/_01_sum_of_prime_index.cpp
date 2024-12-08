#include<bits/stdc++.h>

using namespace std;

bool isPrime(int x){

	if(x == 0 || x == 1){
		return false;
	}

	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	int solution = 0;
	for(int i = 0;i < n; i++){
		cin >> arr[i];
		if(isPrime(i)){
			solution += arr[i]; 
		}
	}
	cout << solution;
	return 0;
}
