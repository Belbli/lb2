#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	int count = 0;
	char str[100];
	cin.getline(str, 100);
	char ch = ',';
	//fgets(str,100,stdin);
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == ch)
		{
			i++;
			while (str[i] != ch)
			{

				cout << str[i];
				i++;
			}
		}
	}
	//cout << str;
	system("pause");
	return 0;
}