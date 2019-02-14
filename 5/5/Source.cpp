#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	int count = 0;
	char str[100];
	cin.getline(str,100);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '\\')
			count++;
		if (count > 1)
		{
			char *lstcat = strrchr(str, '\\');
			cout << lstcat+1 << endl;
			break;
		}
	}
	if (count == 1)
	{
		cout << "\\" << endl;
	}
	system("pause");
	return 0;
}