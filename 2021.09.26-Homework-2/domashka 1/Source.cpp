#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{

	setlocale(LC_ALL, "Russian");

	int n = 0;
	cin >> n;

	switch (n / 100)
	{
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}

	switch (n % 100 / 10) {
	case 1: {
		switch (n % 10)
		{
		case 0:
			cout << "������ ";
			break;
		case 1:
			cout << "����������� ";
			break;
		case 2:
			cout << "���������� ";
			break;
		case 3:
			cout << "���������� ";
			break;
		case 4:
			cout << "������������ ";
			break;
		case 5:
			cout << "���������� ";
			break;
		case 6:
			cout << "����������� ";
			break;
		case 7:
			cout << "���������� ";
			break;
		case 8:
			cout << "������������ ";
			break;
		case 9:
			cout << "������������ ";
			break;
		}
		cout << "������" << endl;
	}
		  break;
	case 2:
		cout << "�������� ";
		break;
	case 3:
		cout << "�������� ";
		break;
	case 4:
		cout << "����� ";
		break;
	case 5:
		cout << "��������� ";
		break;
	case 6:
		cout << "���������� ";
		break;
	case 7:
		cout << "��������� ";
		break;
	case 8:
		cout << "����������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}

	if (n % 100 / 10 != 1) {
		switch (n % 10)
		{
		case 1:
			cout << "���� ";
			break;
		case 2:
			cout << "��� ";
			break;
		case 3:
			cout << "��� ";
			break;
		case 4:
			cout << "������ ";
			break;
		case 5:
			cout << "���� ";
			break;
		case 6:
			cout << "����� ";
			break;
		case 7:
			cout << "���� ";
			break;
		case 8:
			cout << "������ ";
			break;
		case 9:
			cout << "������ ";
			break;
		}
		cout << "�����";
		switch (n % 10)
		{
		case 1:
			break;
		case 2: case 3: case 4: cout << "�" << endl;
			break;
		default: cout << "��" << endl;
		}
	}

	return EXIT_SUCCESS;
}

