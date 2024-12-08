#include<bits/stdc++.h>

using namespace std;


int MinimumNumberOfIntegers(int* arr, int n, int x, int y){
	int minCount = INT_MAX;
	int currCount = INT_MAX;

	int xIndex = -1;
	int yIndex = -1;
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			xIndex = i;
			// y is not found yet
			if(yIndex == -1){
				continue;
			}
			currCount = xIndex - yIndex - 1;
		}else if(arr[i] == y){
			yIndex = i;
			// x is not found yet
			if(xIndex == -1){
				continue;
			}
			currCount = yIndex - xIndex - 1;
		}
		minCount = min(currCount, minCount);

	}
	if(xIndex == -1 || yIndex == -1){
		return -1;
	}
	return minCount;

}

int main(){
	int n, x, y;
	cin >> x >> y >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	cout << MinimumNumberOfIntegers(arr, n, x, y);
	return 0;
}
