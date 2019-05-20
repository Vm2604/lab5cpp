
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
