#include<iostream>
using namespace std;

int rat_house_count(){
	int r;
	cin >> r;
	int u;
	cin >> u;
	int n;
	cin >> n;
	if(n <=0){
		return -1;
	}
	int sum = 0;
	int rf = r * u;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		sum += temp;
		if(sum > rf){
			return i + 1;
		}
	}
	return 0;



}



int main(){
	cout << rat_house_count()<<endl;
	cout << rat_house_count()<<endl;
}
