#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int solution = 0;
	int prev = 0;
	int curr = 1;
	for(int i = 3;i <= n; i++){
		solution = curr + 2 * prev + 3;
		prev = curr;
		curr = solution;
	}


	cout << solution << endl;

	return 0;
}
