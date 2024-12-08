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


	solution[0] = arr[0];
	k++;
	for(int i = 1;i < n; i++){
		if(arr[i - 1] == arr[i]){
			continue;
		}	
		solution[k] = arr[i];
		k++;
	}
	
	cout << "output:" << endl;
	for(int i = 0;i < k; i++){
		cout << solution[i] << " ";
	}
	cout << endl;

	return 0;
}
