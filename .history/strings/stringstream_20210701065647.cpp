
// StringStream

// Comma_seperated string to vector of ints

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    
    vector<int> vec;
    stringstream ss(str);
    
    while (ss.good()) {
        getline(ss,str,',');
        vec.push_back(stoi(str));
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}