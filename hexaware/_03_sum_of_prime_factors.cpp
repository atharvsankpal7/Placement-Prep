#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 0;
	
	while(!(n & 1)){
		n = n / 2;
		sum += 2;
	}

	for(int i = 3;i * i <= n; i += 2){
		while(n % i == 0){
			sum += i;
			n = n / i;
		}
	}
	
	if(n > 2){
		sum += n;
	}
	cout << sum << endl;

	return 0;
}
