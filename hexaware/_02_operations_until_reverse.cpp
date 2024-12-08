#include<bits/stdc++.h>
using namespace std;

int reverseInt(int n){
	int reverse = 0;
	while(n != 0){
		reverse += n % 10;
		n /= 10;
		reverse *= 10;
	}
	return reverse / 10;

}

bool isPalindrome(int n){
	return n == reverseInt(n);
}

int main(){
	int n;
	cin >> n;
	while(!isPalindrome(n)){
		n = n + reverseInt(n);
	}
	cout << n;
	return 0;
}
