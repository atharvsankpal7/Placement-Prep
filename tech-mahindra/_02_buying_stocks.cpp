#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0;i < n; i++){
		cin >> v[i];
	}
	int currLoss = 0;
	int maxLoss = 0;
	for(int i = 0;i < n - 1; i++){
		for(int j = i + 1;j < n; j++){
			currLoss = v[j] - v[i];
			maxLoss = min(maxLoss, currLoss);
		}
	}
	cout << -maxLoss;
	return 0;
}
