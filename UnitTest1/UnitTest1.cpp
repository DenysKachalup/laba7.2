#include "pch.h"
#include "CppUnitTest.h"
#include "../laba7,2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q = 0;
			int w = 0;
			//int row = 3;
			int col = 2;
			int** mas = new int* [col];
			for (int i = 0; i < col; i++)
				mas[i] = new int[col];

			mas[0][0] = { 1 };
			mas[0][1] = { 2 };
			mas[1][0] = { 3 };
			mas[1][1] = { 6 };


			int t = SearchMin(mas, col);

			for (int i = 0; i < col; i++)
				delete[] mas[i];
			delete[] mas;
			Assert::AreEqual(t, 1);
		}
	};
}
