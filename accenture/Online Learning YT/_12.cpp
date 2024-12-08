#include<bits/stdc++.h>
using namespace std;
// repeated question solved for revision
int main(){

	string str;
	cin >> str;
	
	int n = str.size();
	int l = 0;
	int maxLen = INT_MIN;
	int currLen = 0;
	
	unordered_map<char, int> mp;
	for(int r = 0; r < n; r++){
		mp[str[r]]++;
		currLen++;
		while(l <= r && mp[str[r]]!= 1){
			mp[str[l++]]--;
			currLen--;	
		}
		maxLen = max(maxLen, currLen);

		
		
	}
	cout << maxLen << endl;
	return 0;
		
}
