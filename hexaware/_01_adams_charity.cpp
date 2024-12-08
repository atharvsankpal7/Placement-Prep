#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int totalCount = 0;
	for(int i = 1;i <= n; i++){
		totalCount += i*i;
	}
	cout << totalCount << endl;
	totalCount = (n * (n + 1) * (2*n + 1)) / 6;
	cout << totalCount << endl;
	return 0;
}
