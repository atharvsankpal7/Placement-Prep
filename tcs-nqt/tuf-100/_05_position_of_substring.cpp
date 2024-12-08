#include<bits/stdc++.h>

using namespace std;

int main(){

	string str1, str2;
	cin >> str1 >> str2;

	int k = 0;
	int n = str1.size();
	int m = str2.size();
	for(int i = 0;i < n;i++){
		k = 0;
		while(k < m && str1[i + k] == str2[k++]);
		if(k == m){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
