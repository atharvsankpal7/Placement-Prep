#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	int mod = 1e9+7;
	long long solution = ((n * (n + 1)) / 2 + 1) % mod;
	cout << solution << endl;
	return 0;
}
