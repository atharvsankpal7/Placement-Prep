#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string> arr(n);
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	set<string> setArr(arr.begin(), arr.end());
	vector<string> solution(setArr.begin(), setArr.end());
	cout << "\n solution : \n" << endl;
	for(string s : solution){
		cout << s << endl;
	}
	return 0;
}
