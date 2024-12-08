#include<bits/stdc++.h>
using namespace std;

int main(){
	int sec;
	cin >> sec;
	float mps = 1000 / (float)sec;
	float kms = mps * (18/(float)5);
	cout << kms;
	return 0;
}
