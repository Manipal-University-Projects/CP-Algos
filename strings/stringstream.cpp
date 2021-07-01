
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



// stringstream functions

stringstream ss;
or stringstream ss(str);

ss<<str;// inputs to ss
ss>> str;//outputs to str
// operator << — add a string to the stringstream object.
// operator >> — read something from the stringstream object,

good()// to check if the ss is good enough to work

clear() — to clear the stream
str() — to get and set string object whose content is present in stream.


// Questions which can be solved

1) Comma seperated values

Input: "1,2,3,4,5"
Output: 
1
2
3
4
5

Input: "Geeks,for,Geeks"
Output: 
Geeks
for
Geeks




// C++ program to parse a comma-separated string

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str = "1,2,3,4,5,6";
	vector<string> v;

	stringstream ss(str);

	while (ss.good()) {
		string substr;
		getline(ss, substr, ',');
		v.push_back(substr);
	}

	for (size_t i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}



2)
Count number of words in a string
Examples:
Input : Asipu Pawan Kumar
Output : 3

Input : Geeks For Geeks Ide
Output : 4


// CPP program to count words in a string
// using stringstream.
#include <bits/stdc++.h>
using namespace std;

int countWords(string str)
{
	// breaking input into word using string stream
	stringstream s(str); // Used for breaking words
	string word; // to store individual words

	int count = 0;
	while (s >> word)
		count++;
	return count;
}

// Driver code
int main()
{
	string s = "geeks,for,geeks,geeks ";
	cout << " Number of words are: " << countWords(s);
	return 0;
}


3) Print frequencies of individual words in a string

Input : Geeks For Geeks Quiz Geeks Quiz Practice Practice
Output : For -> 1
         Geeks -> 3
         Practice -> 2
         Quiz -> 2

Input : Word String Frequency String
Output : Frequency -> 1
         String -> 2
         Word -> 1 

// CPP program to demonstrate use of stringstream
// to count frequencies of words.
#include <bits/stdc++.h>
using namespace std;

void printFrequency(string st)
{
	// each word it mapped to it's frequency
	map<string, int> FW;
	stringstream ss(st); // Used for breaking words
	string Word; // To store individual words

	while (ss >> Word)
		FW[Word]++;

	map<string, int>::iterator m;
	for (m = FW.begin(); m != FW.end(); m++)
		cout << m->first << " -> "
			<< m->second << "\n";
}

// Driver code
int main()
{
	string s = "Geeks For Geeks Ide";
	printFrequency(s);
	return 0;
}
