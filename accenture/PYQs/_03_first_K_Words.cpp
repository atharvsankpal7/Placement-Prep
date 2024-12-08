#include<bits/stdc++.h>

using namespace std;
int main(){

	

	string str;
	getline(cin, str);
	cin.clear();
	int k;
	cin >> k;
	string solution = "";
	for(int i = 0;i < str.size(); i++){
		if(str[i] == ' '){
			k--;
			if(k == 0){
				break;
			}
		}
		solution += str[i];
	}

	cout << solution << endl;
	return 0;
}
