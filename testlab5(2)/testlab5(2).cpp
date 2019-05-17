//#include "pch.h"
//#include <fstream>
//#include <stdio.h>
//#include <conio.h>
//
//main()
//{
//	FILE *f1, *f2, *h;
//	char s[1000];
//	ofstream f1;
//	f1 = fopen("1.txt", "r");
//	f2 = fopen("2.txt", "r");
//	if (f1 == NULL || f2 == NULL)
//	{
//		printf("File(s) not found\n");
//		return 1;
//	}
//	h = fopen("buf.txt", "w");
//	while (fgets(s, 1000, f1) != NULL)
//		fprintf(h, "%s", s);
//	f1 = fopen("1.txt", "w");
//	while (fgets(s, 1000, f2) != NULL)
//		fprintf(f1, "%s", s);
//	f2 = fopen("2.txt", "w");
//	fclose(h);
//	h = fopen("buf.txt", "r");
//	while (fgets(s, 1000, h) != NULL)
//		fprintf(f2, "%s", s);
//	printf("Done\n");
//	fclose(f1);
//	fclose(f2);
//	fclose(h);
//	_getch();
//}
#include"pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	ifstream input("input.txt"); //Открываешь первый файл для чтения
	string string; //Строка-буфер
	ofstream output("output.txt"); //Открываешь второй файл для записи
	while (getline(input, string))  //Считываешь из файла строку (пока не EOF)
		output << string << std::endl;  //И записываешь эту строку в выходной файл
	system("pause");
	return 0;
}
