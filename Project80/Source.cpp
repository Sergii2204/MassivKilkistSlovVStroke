#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int a = 0;// Находит позицию последней точки
	
	int d = 0;//Счетает количество слов в тексте
	
	int w = 0;//Счетчик массива
	char arr[255];
	cin.getline(arr, 255);
	cout << arr << endl;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		w++;
		
		if ((int)arr[i] == 46)
		{
			a = w;
		}
		if (arr[i] == 32)
		{

			if (arr[i] == 32 && arr[i + 1] == 32)
			{

			}
			else if (arr[i] == 32 && arr[i + 1] == 46)
			{

			}
			else if (arr[i] == 46 && arr[i + 1] == 32)
			{
		
			}
			else
			{
				d++;
			}
		}

	}

	cout << a << "Позиция последней точки" << endl;
	if (!isalpha(arr[0]))
	{
		d--;
	}
	if (arr[strlen(arr) - 1] != 32)
	{
		cout << d + 1 << "количество символов в предложении" << endl;
	}
	else
		cout << d << "количество символов в предложении" << endl;


	system("pause");
}