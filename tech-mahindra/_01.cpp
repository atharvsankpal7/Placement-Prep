#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<vector<int>> m(n, vector<int>(n));

	for(int i = 0;i < n; i++){
		for(int j = 0;j < n; j++){
			cin >> m[i][j];
		}
	}

	int maxDiff = INT_MIN;
	for(int a = 0; a < n - 1; a++){
		for(int b = 0; b < n - 1; b++){
			// going through the subset where  c > a and d > b

			for(int c = a + 1;c < n; c++){
				for(int d = b + 1; d < n; d++){
					maxDiff = max(maxDiff, m[c][d] - m[a][b]);
				}
			}
		}
	}
	cout << maxDiff;
	return 0;
}