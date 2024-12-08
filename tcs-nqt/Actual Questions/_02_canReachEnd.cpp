#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}

	int maxJump = 0;

	for(int i = 0;i < n; i++){
		if(i > max){
			return false;
		}
		maxJump = max(maxJump, i + arr[i]);
	}
	return true;

}
