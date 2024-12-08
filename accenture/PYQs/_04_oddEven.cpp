#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int arr[n];
	string solution = "";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] & 1){
			solution += "Odd";
		}else{
			solution += "Even";
		}
	}
	cout << solution;
	return 0;
}
