// 28.04 Задача А1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int N , i = 0, k = 0, d;
	cin >> N;
	int* A = new int[N];
	for (i = 0; i < N; i++)
		cin >> A[i];
	for (i = 0; i < N; i++)
	{
		for (k = N - 2; k >= i; k--)
		{
			if (A[k + 1] < A[k])
			{
				d = A[k + 1];
				A[k + 1] = A[k];
				A[k] = d;
			}
		}
	}
	for (i = 0; i < N; i++)
		cout << " " << A[i] << " ";
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
