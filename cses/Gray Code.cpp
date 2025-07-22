// C++ program to generate bit patterns from 0 to 2^N-1
#include <bits/stdc++.h>
using namespace std;

vector<string> graycode(int n) {
    vector<string> result;
    
    // Do for all binary numbers
    for(int i = 0; i < (1 << n); i++) {
        int gray = i ^ (i >> 1);
        string code = "";
        for(int j = n-1; j >= 0; j--) {
            code += (gray & (1 << j)) ? '1' : '0';
        }
        result.push_back(code);
    }
    return result;
}

int main() {
    int n = 2;
    vector<string> res = graycode(n);
    for(string code : res) {
        cout << code << endl;
    }
    return 0;
}