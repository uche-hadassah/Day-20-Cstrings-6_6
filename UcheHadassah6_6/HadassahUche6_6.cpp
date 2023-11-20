/*Merge: Write a program to merge the contents of two given words, so that letters are 
taken alternatively from one word and then from the other. The program should create 
a string with those letters and display it on the screen. (When strings are of unequal 
lengths then the remaining letters of the longest string are appended at the end).
For example, assuming that the user enters the two words: “cat” and “horse” then the 
resulting, merged string that is displayed on the screen is: “chaotrse”*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[100], str2[100];
	int size1, size2;
	cout << "Enter the first word:";
	cin >> str1;
	cout << "Enter the second word:";
	cin >> str2;
	for (size1 = 0; str1[size1] != '\0'; size1++);
	for (size2 = 0; str2[size2] != '\0'; size2++);
	int maxsize = size1;
	if(size1 != size2)
	{
		if (size2 > size1)
		{
			maxsize = size2;
		}
	}
	for (int i = 0; i < maxsize; i++)
	{
		if (i < size1)
		{
			cout << str1[i];
		}
		if (i < size2)
		{
			cout << str2[i];
		}
	}
}