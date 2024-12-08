#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	for(int i = n; i >= 1;i--){
		if(n % i == 0){
			k--;
			if(k == 0){
				cout << i << endl;
				return 0;
			}
		}
	}
	cout << 1 << endl;
	return 0;
}

