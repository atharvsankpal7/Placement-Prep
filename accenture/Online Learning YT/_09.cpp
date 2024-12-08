#include<bits/stdc++.h>
using namespace std;

int main(){
	 int n;
	 cin >> n;
	 int num;
	 cin >> num;
	 

	 string solution = "";
	
	 while(num != 0){
	 	int r = num % n;
		if(r < 10){
			solution += r + '0';
		}
		else{
			solution += (r - 10) + 'A';
		}
		num /= n;
	 
	 }
	reverse(solution.begin(), solution.end());
	cout << solution;

	 return 0;
}
