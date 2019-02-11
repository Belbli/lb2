#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int num;
	char str[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0 || i == 0)
		{
			num = 2 * (rand() % 5);
			str[i] = char(num + 48);
		}
		else
		{
			num = rand() % 25;
			str[i] = char(num + 65);
		}
		
		
		cout << str[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}