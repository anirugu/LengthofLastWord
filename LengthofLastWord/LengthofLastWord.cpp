// LengthofLastWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int lengthOfLastWord(string);
int main()
{
	int count = lengthOfLastWord("Hello World!\n");
	cout << count;
}

int lengthOfLastWord(string s)
{
	bool isFound = false;
	int count = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] != ' ') {
			isFound = true;
			count++;
		}
		else if (s[i] == ' ') {
			if (isFound) {
				break;
			}
			continue;
		}

	}
	return count;
}