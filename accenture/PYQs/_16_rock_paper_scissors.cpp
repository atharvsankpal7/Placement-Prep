#include<bits/stdc++.h>
using namespace std;

string bChoice(string a){
	if(a == "Rock"){
		return "Paper";
	}
	if(a == "Paper"){
		return "Scissors";
	}
	return "Rock";
}
int main(){
	string a;
	cin >> a;
	cout << bChoice(a);
	return 0;
}