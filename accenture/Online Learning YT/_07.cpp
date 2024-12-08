#include<bits/stdc++.h>
using namespace std;

int main(){
	
	char ch1;
	char ch2;
	cin >> ch1 >> ch2;
	string str;
	cin >> str;
	for(char& c : str){
		if(c == ch1){
			c = ch2;
			continue;
		}
		if(c == ch2){
			c = ch1;
		}
	}
	cout << str <<endl;

}
