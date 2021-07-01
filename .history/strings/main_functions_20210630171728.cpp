
1) isdigit()
2) isalpha()
3) islower()
4) isupper()
5) stoi(): string to integer, ig the value provided  contains other characters then 
        it retains only the int part

6) find():
        InputIterator find (InputIterator first, InputIterator last, const T& val)
// CPP program to illustrate
// std::find
// CPP program to illustrate
// std::find
#include<bits/stdc++.h>

int main ()
{
	std::vector<int> vec { 10, 20, 30, 40 };
	
	// Iterator used to store the position
	// of searched element
	std::vector<int>::iterator it;
	
	// Print Original Vector
	std::cout << "Original vector :";
	for (int i=0; i<vec.size(); i++)
		std::cout << " " << vec[i];
		
	std::cout << "\n";
	
	// Element to be searched
	int ser = 30;
	
	// std::find function call
	it = std::find (vec.begin(), vec.end(), ser);
	if (it != vec.end())
	{
		std::cout << "Element " << ser <<" found at position : " ;
		std::cout << it - vec.begin() << " (counting from zero) \n" ;
	}
	else
		std::cout << "Element not found.\n\n";
		
	return 0;
}


7) find(): in strings

// CPP program to demonstrate working of string
// find to search a string
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "geeksforgeeks a computer science";
	string str1 = "geeks";

	// Find first occurrence of "geeks"
	size_t found = str.find(str1);
	if (found != string::npos)
		cout << "First occurrence is " << found << endl;

	// Find next occurrence of "geeks". Note here we pass
	// "geeks" as C style string.
	char arr[] = "geeks";
	found = str.find(arr, found+1);
	if (found != string::npos)
		cout << "Next occurrence is " << found << endl;

	return 0;
}

What is string::npos: It is a constant static member value with the highest 
possible value for an element of type size_t. It actually means until the end 
of the string. It is used as the value for a length parameter in the string's
member functions.