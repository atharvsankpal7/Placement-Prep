#include<bits/stdc++.h>
using namespace std;

bool isTriple(vector<int>& ds, int k){
        if(ds.size() < 1){
                return false;
        }

        for(int i = 1;i < ds.size(); i++){
                if(ds[i - 1] * 3 != ds[i]){
                        return false;
                }
        }
        return true;
}

void helper(int *arr, int n, int& maxCount, vector<int> ds, int i, int k){

        if(i == n){
                if(isTriple(ds, k)){
                        maxCount = max(maxCount, (int)ds.size());
                }
                return;
        }

        ds.push_back(arr[i]);
        // pick
        helper(arr, n, maxCount, ds, i + 1, k);
        //not pick
        ds.pop_back();
        helper(arr, n, maxCount, ds, i + 1, k);

}

int main(){

        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
                cin >> arr[i];
        }
        int maxCount = 0;
        vector<int> ds;
        helper(arr, n, maxCount, ds, 0, k);
        cout << maxCount << endl;
        return 0;
}

