#include<bits/stdc++.h>
using namespace std;
void decToBi(int n,int *a){
	int i = 0;
	while(n != 0){
		// cout << n % 2; 
		a[i++] = n % 2;
		n /= 2;
	}
	
	// cout << endl;
}
int helper(int n){
	int arrSize = log(n) / log(2) + 1;
	int arr[arrSize];
	decToBi(n, arr);
	int oneCount = count(arr, arr + arrSize, 1);
	int solution = 0;
	int multiFactor = 1;
	for(int i = 0; i < oneCount; i++){
		solution += multiFactor;
		multiFactor *= 2;
	} 
	return solution;
}



int main(){
	int n;
	cin >> n;
	cout << helper(n) << endl;
	return 0;
}