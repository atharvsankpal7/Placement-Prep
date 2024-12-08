
#include<bits/stdc++.h>
using namespace std;



bool isPrime(int x) {
    if (x <= 1) return false;  // 0 and 1 are not prime numbers
    if (x <= 3) return true;   // 2 and 3 are prime numbers
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}




int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	
	int sum = 0;

	bool prevE = isPrime(arr[0]);
	for(int i = 1;i < n; i++){
		bool currE = isPrime(arr[i]);
		if(prevE != !currE){
			sum += arr[i]; 	
		}
		prevE = currE;
	}

	cout << sum << endl;

	return 0;
}

