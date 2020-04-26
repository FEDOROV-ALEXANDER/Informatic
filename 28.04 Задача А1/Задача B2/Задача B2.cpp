// Задача B2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream Fin;
    ofstream Fout;
    int min=1000, max=-1100,x;
    Fin.open("данные.txt");
    if (Fin)
    {
        while (Fin >> x)
        {
            if ((x < min) && (x % 2 == 0))
                min = x;
            else if ((x > max) && (x % 2 == 0))
                max = x;
        }

        Fin.close();
        Fout.open("результат.txt");
        Fout << min<<endl;
        Fout << max;
        Fout.close();
        setlocale(LC_ALL, "Russian");
        cout << " всё ок, файл результат.txt";
    }
    else
    cout << " файл не найден";
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
