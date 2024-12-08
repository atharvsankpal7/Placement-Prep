#include<bits/stdc++.h>
using namespace std;
int InversionCount(int *a, int n){
	if(n == 0 || a == nullptr){
		return -1;
	}
	if(n < 2){
		return 0;
	}
	int solution = 0;
	for(int k = 1;k < n;k++){
		int x = a[k];
		for(int j = k - 1; j >= 0; j--){
			int y = a[j];
			if(y > x){
				solution++;
			}
		}
	}
	return solution;


}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cout << InversionCount(a, n) << endl;
	return 0;
}
