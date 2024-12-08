class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixes;
        int solution = 0;
        for(int n1 : arr1){
            while(n1 != 0 && prefixes.find(n1) == prefixes.end()){
                prefixes.insert(n1);
                n1 /= 10;
            }
        }

        for(int n2 : arr2){
            while(n2 != 0){
                if(prefixes.find(n2) != prefixes.end()){
                    solution = max(solution, (int)to_string(n2).size());
                    break;
                }
                n2 /= 10;
            }
        }
        return solution;
    }
};