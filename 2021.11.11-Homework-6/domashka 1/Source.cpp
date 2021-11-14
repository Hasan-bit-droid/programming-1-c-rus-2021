#define _GRT_SCURE_N0_WARNINGS
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russion");
	bool exiting = 0;

	int capacity = 1;
	int count = 0;
	int* arr = new int[capacity] { 0 };
	int actcapacity = 0;
	int choice = 0;

	cout << " МЕНЮ " << endl;
	cout << " 0. Выход из программи. " << endl;
	cout << " 1. Вывод текущего состояние  массива." << endl;
	cout << " 2. Добавить элемент в конец массива. " << endl;
	cout << " 3. Добавить элемент в начало массива. " << endl;
	cout << " 4. Удалить элемент из конца массива. " << endl;
	cout << " 5. Удалить элемент из начала массива. " << endl;
	cout << " 6. Инвертировать массив " << endl;
	cout << " 7. Печать МЕНЮ" << endl;

	while (!exiting)
	{		
		cout << "Choose option" << endl;
		cin >> choice;
		
		switch (choice)
		{

		case 0:
			exiting = 1;
			cout << "Успешный выход!";
			break;
		case 1:
			cout << "Фактический массив: ";
			if (actcapacity == 0)
			{
				cout << "пустой";
			}
			else
			{
				for (int i = 0; i < actcapacity; i++)
				{
					cout << arr[i] << " ";
				}
			}
			cout << endl;
			break;
		case 2: case 3:
			if (actcapacity == capacity)
			{
				int* newarr = new int[capacity * 2]{ 0 };
				for (int i = 0; i < capacity; i++)
				{
					newarr[i] = arr[i];
				}
				delete[] arr;
				arr = newarr;
				capacity *= 2;
			}
			switch (choice)
			{
			case 2:
				cout << "Новый элемент в итоге: ";
				cin >> arr[actcapacity];
				break;
			case 3:
				cout << "Новый элемент в начале: ";
				for (int i = actcapacity; i > 0; i--)
				{
					arr[i] = arr[i - 1];
				}
				cin >> arr[0];
				break;
			}
			actcapacity++;
			break;

		case 4:
			if (actcapacity > 0)
			{
				arr[actcapacity] = 0;
				actcapacity--;
				cout << "Последний элемент успешно удален!" << endl;
			}
			else
			{
				cout << "Не могу удалить. Массив пуст!" << endl;
			}
			break;
		case 5:
			if (actcapacity > 0)
			{
				for (int i = 0; i < actcapacity; i++)
				{
					arr[i] = arr[i + 1];
				}
				actcapacity--;
				cout << "Первый элемент успешно удален!" << endl;
			}
			else
			{
				cout << "Не могу удалить. Массив пуст!" << endl;
			}
			break;
		case 6:
			for (int i = 0; i <= (actcapacity - 1) / 2; i++)
			{
				int t = arr[i];
				arr[i] = arr[actcapacity - i - 1];
				arr[actcapacity - i - 1] = t;
			}
			cout << "Массив успешно инвертирован!" << endl;
			break;
		case 7:
			cout << " МЕНЮ " << endl;
			cout << " 0. Выход из программи. " << endl;
			cout << " 1. Вывод текущего состояние  массива." << endl;
			cout << " 2. Добавить элемент в конец массива. " << endl;
			cout << " 3. Добавить элемент в начало массива. " << endl;
			cout << " 4. Удалить элемент из конца массива. " << endl;
			cout << " 5. Удалить элемент из начала массива. " << endl;
			cout << " 6. Инвертировать массив " << endl;
			cout << " 7. Печать МЕНЮ" << endl;
			break;
		default:
			cout << "Error 404" << endl << "Wrong option. Try again. Please!" << endl;
			break;

		}
		cout << endl;
	}
	delete[] arr;
	return EXIT_SUCCESS;
}
