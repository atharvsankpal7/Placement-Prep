#include<bits/stdc++.h>
using namespace std;

int main(){
  	vector<int> arr;
	int sum;
	cin >> sum;
	int temp;
	while(cin >> temp){
		arr.push_back(temp);	
	}
	
	unordered_map<int, int> mp;
	int currSum = 0;
	int solution = 0;
	for(int i = 0;i < arr.size(); i++){
		currSum += arr[i];
		
		if(sum == currSum){
			solution++;
		}

		if(mp.find(currSum - sum) != mp.end()){
			solution += mp[currSum - sum];
		}
		mp[currSum]++;
	}
	cout << solution << endl;
	return 0;
	
}
