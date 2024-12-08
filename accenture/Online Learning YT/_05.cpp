#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int x, y,n;
	cin >> x >> y >> n;
	int currCount = 0;
	int minCount = n;
	vector<int> xIndices;
	vector<int> yIndices;
	bool xFound = false;
	bool yFound = false;
	for(int i = 0; i < n; i++){
		int ip;
		cin >> ip;
		if(ip == x){
			xFound = true;
			xIndices.push_back(i);
		}
		if(ip == y){
			yFound = true;
			yIndices.push_back(i);
		}
	}
	for(int i = 0; i < xIndices.size(); i++){
		for(int j = 0; j < yIndices.size(); j++){
			minCount = min(minCount, abs(xIndices[i] - yIndices[j]));
		}
	}

	
	cout<< minCount - 1<<endl;
																																					return 0;
}
