#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	vector<int> arr(26, 0);
	for(char c : str){
		arr[c - 'a']++;
	}
	bool isOddFound = false;
	for(int i = 0;i < 26;i++){
		if(arr[i] & 1){
			if(isOddFound){
				cout << 0 <<endl;
				return 0;
			}
			isOddFound = true;
		}
	}
	cout << 1 << endl;
	return 0;

}
