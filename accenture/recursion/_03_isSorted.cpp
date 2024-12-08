#include<iostream>
using namespace std;
bool isSorted(int* arr,int i,int s){
    if(i + 1 == s){
        return true;
    }
    return arr[i] <= arr[i + 1] && isSorted(arr,i+1,s);
}

int main(){
     int arr[]= {1,2,3,4,5,7,6};
     int size = (sizeof(arr)/sizeof(arr[0]));
	cout << isSorted(arr,0,size);
	return 0;
}