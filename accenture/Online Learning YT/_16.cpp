#include<bits/stdc++.h>
using namespace std;

int main(){

	int m, n;
	cin >> m >> n;
	int even = 0;
	int odd = 0;
	for(int i = m; i <= n; i++){
		if(i & 1){
			even += sqrt(i);
		}else{
			odd += sqrt(i);
		}
	}
	cout << abs(even - odd) << endl;;
	return 0;
}
