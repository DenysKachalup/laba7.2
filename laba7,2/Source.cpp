#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

void print(int** mas, const int row)
{

	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < row; k++)
			cout << setw(4) << mas[i][k];
		cout << endl << endl;
	}
}
void Creat(int** mas, const int n, const int Low, const int High)
{
	int b;
	cout << " A" << endl << endl;
	for (int i = 0; i < n; i++)
		for (int k = 0; k < n; k++)
		{
			b = Low + rand() % (High - Low + 1);
			mas[i][k] = b;
		}
}
int SearchMin(int** a, const int n)
{
	int min;
	int p;
	int& s = p;

	for (int i = 0; i < n; i++) {
		min = a[i][0];
		for (int k = 1; k < n; k++)
		{
			if (a[i][k] < min)
			{


				min = a[i][k];

			}
			if (k == n - 1)
			{

				a[i][n - i - 1] = min;


			}
		}
	}
	return 1;
}
int main()
{
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	int L = 11;
	int H = 74;

	int n; cout << "Кількість рядків та стовпців: "; cin >> n;

	cout << endl << endl;

	int** mas = new int* [n];
	for (int i = 0; i < n; i++)
		mas[i] = new int[n];


	Creat(mas, n, L, H);
	print(mas, n);
	SearchMin(mas, n);

	cout << endl << endl;
	cout << " B" << endl << endl;
	print(mas, n);
	cout << endl << endl;

	for (int i = 0; i < n; i++)
		delete[] mas[i];
	delete[] mas;
	return 0;
}