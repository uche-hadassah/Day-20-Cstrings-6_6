/*Name: Uche Hadassah
This program merges the contents of two given words alternatively and appends lefover words at the end*/
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

	for (size1 = 0; str1[size1] != '\0'; size1++);//gets the length of the string just like "strlen (str1);"
	for (size2 = 0; str2[size2] != '\0'; size2++);//gets the length of the string just like "strlen (str2);"
	int maxsize = size1;//Initialize a maxsize to one of the string lengths

	if(size1 != size2)
	{
		if (size2 > size1)
		{
			maxsize = size2;//changes if the other is bigger
		}
	}

	for (int i = 0; i < maxsize; i++)
	{
		if (i < size1)//Outputs until i !< size1
		{
			cout << str1[i];
		}
		if (i < size2)//Outputs until i !< size2
		{
			cout << str2[i];
		}
	}
}