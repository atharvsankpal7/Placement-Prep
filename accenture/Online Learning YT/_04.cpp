#include<bits/stdc++.h>
using namespace std;

int main(){
	string ip;
	getline(cin, ip);
	cin.clear();
	string solution = "";
	int solutionSize = INT_MIN;
	string currStr = "";
	for(auto c: ip){

		if(c == ' '){
			if(currStr.size() > solutionSize){
				solution = currStr;
				solutionSize = solution.size();
			
			}
			currStr = "";
		}else
			currStr += c;

	}
	if(currStr.size() > solution.size()){
		solution = currStr;
	}
		
	cout << "The longest string is: "<< solution << endl;
	return 0;
}
