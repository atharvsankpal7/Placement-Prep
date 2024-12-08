#include<bits/stdc++.h>
using namespace std;


bool isExponentOfTwo(int x){
	double logToBaseTwo = log(x) / log(2);
	int checkInt = logToBaseTwo;
	return logToBaseTwo - checkInt == 0;
	
}
int main(){

	int a;
	int b;
	cin >> a >> b;

	for(int i = a; i <= b; i++){
		if(isExponentOfTwo(i)){
			cout << i << endl;
			return i;
		}
	}
	return -1;
}
