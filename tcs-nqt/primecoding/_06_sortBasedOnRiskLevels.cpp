#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	unordered_map<int, int> mp;
	for(int i = 0;i < n; i++){
		mp[arr[i]]++;
	}

	int solution[n];
	int k = 0;
	
	for(int i = 0;i < 3; i++){
		for(int j = 0; j < mp[i]; j++){
			solution[k++] = i;
			cout << i << " ";
		}
	}

	return 0;
}
