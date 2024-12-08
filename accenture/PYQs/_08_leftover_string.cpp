#include<bits/stdc++.h>
using namespace std;
int main(){

	string a, b;
	cin >> a >> b;
	unordered_map<char, int> b_char;
	string solution = "";
	for(char c : b){
		b_char[c]++;
	}
	for(char c : a){
		if(b_char.find(c) == b_char.end()){
			solution += c;
		}
	} 
	cout << solution << endl;
	return 0;
}
