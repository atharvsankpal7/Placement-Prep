#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<pair<int,int>> ip;
	for(int i = 0; i < n; i++){
		int f;
		int s;
		cin >> f >> s;
		ip.push_back({f, s});
	}

	sort(ip.begin(), ip.end(), [&](auto a, auto b){
		if(a.first > b.first){
			return a < b;
		}
		return a > b;
	});

	vector<pair<int, int>> sol;
	
	for(int i = 0; i < n; i++){
		int f = ip[i].first;
		while(i < n + 1 && ip[i].second > ip[i + 1].first){
			i++;
		}
		int s = ip[i].second;
		sol.push_back({f, s});
		cout << "[" << f << ", " << s << "]\t"; 
	}
	return 0;


	
}
