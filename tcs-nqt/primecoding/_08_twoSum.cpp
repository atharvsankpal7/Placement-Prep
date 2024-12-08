#include<bits/stdc++.h>
using namespace std;

int main(){
	int target;
	cin >> target;
	int n; 
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	unordered_map<int, int> mp;
	for(int i = 0;i < n; i++){
		mp[arr[i]] = i;
	}

	pair<int, int> solution;
	for(int i = 0;i < n; i++){
		if(mp.find(target - arr[i]) != mp.end()){
			solution.first = i;
			solution.second = mp[target - arr[i]];
			cout << solution.first << " " << solution.second;
			break;
		}
	}
	return 0;
}
