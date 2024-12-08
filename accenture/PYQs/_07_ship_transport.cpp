#include<bits/stdc++.h>
using namespace std;

int main(){

	int c, n;
	cin >> c >> n;
	int solution = 0;
	while(n > 0){
		solution++;
		n -= c;
	}
	cout << solution << endl;
	return 0;
}
