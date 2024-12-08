#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<string> w1;
	vector<string> w2;
	int n1, n2;
	cin >> n1 >> n2;
	for(int i = 0; i < n1;i++){
		string ip;
		cin >> ip;
		w1.push_back(ip);
	}
	for(int i = 0; i < n2; i++){
		string ip;
		cin >> ip;
		w2.push_back(ip);
	} 
	string word1;
	string word2;
	int i = 0;
	for(; i < min(n1, n2); i++){
		word1 += w1[i];
		word2 += w2[i];
	}
	for(;i < n1; i++){
		word1 += w1[i];
		
	}
	for(;i < n2; i++){
		word2 += w2[i];
	}

	if(word1 == word2){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
