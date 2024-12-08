#include<bits/stdc++.h>
using namespace std;

bool isZNum(int x){
	if(x / 10 == 0){
		return true;
	}
	string str = to_string(x);
	
	if(str[0] == str[1]){
		return false;
	}

	bool shouldBeGreater = str[0] > str[1];			

	for(int i = 1; i < str.size() - 1; i++){
		if(shouldBeGreater){
			if(str[i] >= str[i + 1]){
				return false;
			}
		}else{
			if(str[i] <= str[i + 1]){
				return false;
			}
		}
		shouldBeGreater = !shouldBeGreater;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int solution = 0;
	//cout << isZNum(n) << endl;
	for(int i = 0;i <= n; i++){
		solution += isZNum(i);
	}
	cout << solution << endl;
	return 0;
}
