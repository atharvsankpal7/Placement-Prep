#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[500];
	int n = 0;
	while(cin >> arr[n++]);

	int solution[n];
	int k = n;

	bool isDuplicate[n];
	for(int i = 0;i < n; i++){
		isDuplicate[i] = false;
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] == arr[j]){
				isDuplicate[j] = true;
				k--;
			}
		}
	}

	int j = 0;
	for(int i = 0;i < n; i++){
		if(isDuplicate[i]){
			continue;
		}
		solution[j] = arr[i];
		j++;
	}

	for(int i = 0; i < k; i++){
		cout << solution[i] << " ";
	}


	return 0;
}
