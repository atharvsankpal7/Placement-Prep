#include<iostream>
using namespace std;

int differenceOfSum(int n, int m){
	int nonD = 0;
	int d = 0;
	for(int i = 1; i <= n;i++){
		if(i % m){
			nonD += i;
		}else{
			d +=i;
		}
	}
	return nonD - d;
}

int main(){
	cout << differenceOfSum(10,3);
	return 0;
}