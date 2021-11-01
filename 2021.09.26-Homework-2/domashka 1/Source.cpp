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
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}

	switch (n % 100 / 10) {
	case 1: {
		switch (n % 10)
		{
		case 0:
			cout << "десять ";
			break;
		case 1:
			cout << "одиннадцать ";
			break;
		case 2:
			cout << "двенадцать ";
			break;
		case 3:
			cout << "тринадцать ";
			break;
		case 4:
			cout << "четирнадцать ";
			break;
		case 5:
			cout << "пятнадцать ";
			break;
		case 6:
			cout << "шестнадцать ";
			break;
		case 7:
			cout << "семнадцать ";
			break;
		case 8:
			cout << "восемнадцать ";
			break;
		case 9:
			cout << "девятнадцать ";
			break;
		}
		cout << "банана" << endl;
	}
		  break;
	case 2:
		cout << "двадцать ";
		break;
	case 3:
		cout << "тридцать ";
		break;
	case 4:
		cout << "сорок ";
		break;
	case 5:
		cout << "пятьдесят ";
		break;
	case 6:
		cout << "шестьдесят ";
		break;
	case 7:
		cout << "семьдесят ";
		break;
	case 8:
		cout << "восемьдесят ";
		break;
	case 9:
		cout << "девяносто ";
		break;
	}

	if (n % 100 / 10 != 1) {
		switch (n % 10)
		{
		case 1:
			cout << "один ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
		}
		cout << "банан";
		switch (n % 10)
		{
		case 1:
			break;
		case 2: case 3: case 4: cout << "а" << endl;
			break;
		default: cout << "ов" << endl;
		}
	}

	return EXIT_SUCCESS;
}

