#include<iostream>
#include<string>
using namespace std;

int main()
{
	char temp;
	char str[50];
	cin.getline(str,50);
	char a = 'a';
	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i];
		if (str[i] == a)
		{
			cout << "b";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}