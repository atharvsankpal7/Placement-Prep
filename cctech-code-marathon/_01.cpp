#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	getline(cin, s);

	vector<string> v;

	string curr = "";
	for(const char& c : s){
		// dividing based on the words
		if(c == ' '){
			v.push_back(curr);
			curr = "";
		}else{
			curr += c;
		}	
	}
	// adding last word
	v.push_back(curr);

	reverse(v.begin(), v.end());

	for(const string& s : v){
		cout << s << " ";
	}
	return 0;

}
