#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	int l = 0;
	int n = str.size();
	int solution = 1;
	int lastI = n;
	for(int r = str.size() - 1; r > l; r--){
		if(str[l] == str[r]){
			lastI = min(lastI, (int)str[l]);
		}else{
			lastI = n;
		}
		l++;
	}
	solution = str.size() - 2*lastI;
	cout << solution << endl;
	return 0;
}
