#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n][n];
	for(int i = 0;i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	// Transposing the array
	for(int i = 0;i < n; i++){
		for(int j = i; j < n; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	
	for(int i = 0;i < n; i++){
		reverse(arr[i], arr[i] + n);
	}

	for(int i = 0;i < n; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
