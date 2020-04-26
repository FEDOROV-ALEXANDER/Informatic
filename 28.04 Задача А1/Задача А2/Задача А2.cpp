// Задача А2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include<iostream>
using namespace std;

int main()
{

	ifstream Fin;
	ofstream Fout;
	int x, sum,i=0;
	Fin.open("input_2.txt");
	if (Fin) {
		sum = 0;
		while (Fin >> x) {
			sum += x;
			i++;
		} sum = sum / i;
		Fin.close();
		Fout.open("output_2.txt");
		Fout << sum;
		Fout.close();
		setlocale(LC_ALL, "Russian");
		cout << "Данные сохранены в файле 'output_2.txt'.";
	}
	else
		cout << "Не удалось открыть файл 'input_2.txt'.";
	cin.get();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
