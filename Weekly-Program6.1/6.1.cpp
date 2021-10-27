#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int s = 0, b = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			b++;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			s++;
		}
	}
	if (b != 0 and s != 0)
	{
		cout << "Mix";
	}
	else if (b == 0)
	{
		cout << "All Small Letter";
	}
	else if (s == 0)
	{
		cout << "All Capital Letter";
	}
}
