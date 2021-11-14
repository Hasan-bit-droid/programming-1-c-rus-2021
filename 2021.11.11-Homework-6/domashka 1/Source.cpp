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

	cout << " ���� " << endl;
	cout << " 0. ����� �� ���������. " << endl;
	cout << " 1. ����� �������� ���������  �������." << endl;
	cout << " 2. �������� ������� � ����� �������. " << endl;
	cout << " 3. �������� ������� � ������ �������. " << endl;
	cout << " 4. ������� ������� �� ����� �������. " << endl;
	cout << " 5. ������� ������� �� ������ �������. " << endl;
	cout << " 6. ������������� ������ " << endl;
	cout << " 7. ������ ����" << endl;

	while (!exiting)
	{		
		cout << "Choose option" << endl;
		cin >> choice;
		
		switch (choice)
		{

		case 0:
			exiting = 1;
			cout << "�������� �����!";
			break;
		case 1:
			cout << "����������� ������: ";
			if (actcapacity == 0)
			{
				cout << "������";
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
				cout << "����� ������� � �����: ";
				cin >> arr[actcapacity];
				break;
			case 3:
				cout << "����� ������� � ������: ";
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
				cout << "��������� ������� ������� ������!" << endl;
			}
			else
			{
				cout << "�� ���� �������. ������ ����!" << endl;
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
				cout << "������ ������� ������� ������!" << endl;
			}
			else
			{
				cout << "�� ���� �������. ������ ����!" << endl;
			}
			break;
		case 6:
			for (int i = 0; i <= (actcapacity - 1) / 2; i++)
			{
				int t = arr[i];
				arr[i] = arr[actcapacity - i - 1];
				arr[actcapacity - i - 1] = t;
			}
			cout << "������ ������� ������������!" << endl;
			break;
		case 7:
			cout << " ���� " << endl;
			cout << " 0. ����� �� ���������. " << endl;
			cout << " 1. ����� �������� ���������  �������." << endl;
			cout << " 2. �������� ������� � ����� �������. " << endl;
			cout << " 3. �������� ������� � ������ �������. " << endl;
			cout << " 4. ������� ������� �� ����� �������. " << endl;
			cout << " 5. ������� ������� �� ������ �������. " << endl;
			cout << " 6. ������������� ������ " << endl;
			cout << " 7. ������ ����" << endl;
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
