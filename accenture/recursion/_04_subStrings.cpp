#include<iostream>
#include<vector>
using namespace std;

vector<string> getAllSubStrings(string p,string up){
    // if there is no string to be processed, return processed string
    if(up == ""){
        vector<string> list;
        list.push_back(p);
        return list;
    }

    char c = up[0]; //extra character from unprocessed string
    // getting substrings having extra character
    vector<string> right = getAllSubStrings(p + c, up.substr(1));
    // getting substrings not having extra character
    vector<string> left = getAllSubStrings(p, up.substr(1));

    right.insert(right.end(), left.begin(), left.end());
    return right;
}

int main(){
    vector<string> s = getAllSubStrings("","abbbc");
    for(auto& sub:s){
        cout << sub << endl;
    }
    return 0;
}
