#include<bits/stdc++.h>
using namespace std;
int main(){

	priority_queue<int> pq;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
		pq.push(arr[i]);
	}
	pq.pop();
	int count = 0;
	for(int i = 0;i < n; i++){
		if(pq.top() == arr[i]){
			count++;	
		}
	}
	cout << count;
	return 0;
}
