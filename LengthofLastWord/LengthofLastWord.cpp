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
	bool isStarted = false;
	int count = 0;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			if (isStarted)
				break;
		}
		else
		{
			count++;
			isStarted = true;
		}
	}
	return count;
}