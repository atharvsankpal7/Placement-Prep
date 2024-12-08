#include<bits/stdc++.h>
using namespace std;
int main(){

		
	vector<int> mp1(26,0);
	vector<int> mp2(26,0);
	string s1;
	string s2;
	cin >> s1 >> s2;
	for(auto c: s1){
		mp1[c - 'a']++;
	}
	for(auto c: s2){
		mp2[c - 'a']++;
	}
	int solution = 0;
	for(int i = 0; i< 27; i++){
		if(mp2[i] > mp1[i]){
			solution += mp2[i] - mp1[i];
		}
	}
	cout << solution <<endl;
	return 1;
}
