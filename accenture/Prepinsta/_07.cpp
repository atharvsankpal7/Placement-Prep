#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string DectoNBase(int n,int num){
	string solution ="";
	while(num != 0){
		int r = num % n;
		if(r >= 10){
			solution += '7' + r;
		}else{
			solution += r + '0';
		}
		
		num = num / n;
	}
		reverse(solution.begin(),solution.end());
		
	return solution;
}

int main(){
	int n;
	int num;
	cin>>n;
	cin>>num;
	cout<<DectoNBase(n,num);
	return 0;
}
