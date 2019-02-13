#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char str[100];
	int count = 1,min = 100;
	char smb,ressmb;
	cin.getline(str, 100);
	for (int i = 0; i < strlen(str); i++)
	{
		smb = str[i];
		count = 1;
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == smb && i!=j)
				count++;
		}
		if (count < min)
		{
			min = count;
			ressmb = str[i];
		}
	}
	cout << "Самый редко встречающийся символ в тексте -- " << ressmb << endl;
	system("pause");
	return 0;
}