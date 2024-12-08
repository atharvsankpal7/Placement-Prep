#include<iostream>
using namespace std;

int OperationsBinaryString(const char* str, int n) {
    int pr = str[0] - '0'; // Initialize with the first character as a number

    for (int i = 1; i < n; i++) {
        char o = str[i];
        i++;
        int cn = str[i] - '0';
        
        switch (o) {
            case 'C':
                pr ^= cn;
                break;
            case 'A':
                pr &= cn;
                break;
            case 'B':
                pr |= cn;
                break;
            default:
                // Handle unexpected characters
                cerr << "Unexpected operation character: " << o << endl;
                return -1;
        }
    }

    return pr;
}

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    if (str.length() != n) {
        cerr << "Input string length does not match the specified length." << endl;
        return -1;
    }

    int result = OperationsBinaryString(str.c_str(), n);
    cout << result << endl;

    return 0;
}

