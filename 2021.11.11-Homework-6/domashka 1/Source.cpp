#define _GRT_SCURE_N0_WARNINGS
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russion");
	bool exiting = false;

	int capacity = 10;
	int count = 0;
	int* a = new int[capacity] { 0 };

	while (!exiting)
	{
		system ("cls" );
		printf("0. Выход из программи.\n");
		printf("1. Вывод текущего состояние  массива.\n");
		printf("2. Добавить элемент в конец массива.\n");
		printf("3. Добавить элемент в начало массива.\n");
		printf("4. Удалить элемент из конца массива.\n");
		printf("5. Удалить элемент из начала массива.\n");
		printf("Input your choice : ");






	}
}
