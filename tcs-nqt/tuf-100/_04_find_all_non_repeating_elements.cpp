#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	unordered_map<int, int> elementCount;
	set<int> solution;
	for(int i = 0;i < n; i++){
		elementCount[arr[i]]++;
	}
	
	for(int i = 0;i < n; i++){
		if(elementCount[arr[i]] == 1){
			solution.insert(arr[i]);
		}
	}

	for(int e : solution){
		cout << e << " ";
	}
	cout << endl;
	return 0;
}
