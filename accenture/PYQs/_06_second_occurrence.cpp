#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	set<int> ip;
	for(int i = 0;i < n; i++){
		cin >> ip[n];
	}
	if(ip.size() < 2){
		cout << 0 << endl;
		return -1;
	}
	auto lastPos = --set.end();
	ip.erase(lastPos);

	int secondLast = *(--set.end());
	int count = 0;
	for(int i = 0; i < n;i++){
		if(secondLast == ip[i]){
			count++;	
		}
	}
	cout << count << endl;
	return 0;
}
