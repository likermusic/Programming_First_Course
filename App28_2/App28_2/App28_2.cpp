﻿// App28_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	char str[256];
	int countNumber = 0,strLength=0;
	printf_s("Введите текст \n");
	fgets(str, 256, stdin);
	for (int i = 0; str[i] != 0; i++) {
		strLength++;
	}
	for (int i = 0;str[i]!='\0'; i++) {
		if (str[i]==' ' && (str[i+1]==' ' || !i || i==strLength-1)) {
			for (int j = i; j < strLength; j++) {
				str[j] = str[j + 1];
			}
			strLength--;
			i--;
		}
	}
	printf("Строка без долгих пробелов \n");
	printf_s("%s \n", str);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
