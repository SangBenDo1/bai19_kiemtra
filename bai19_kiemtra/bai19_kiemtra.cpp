// bai19_kiemtra.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
/// <summary>
/// Ham kiem tra so nguyen to hay ko
/// </summary>
/// <returns></returns>
/// true la so nguyen to
/// flase la ko phai so nguyen to
/// </returns>
bool kiemtraSNT(int s) {
	int dem = 0;
	for (int i = 1; i <= s; i++)
	{
		if (s % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	else {
		return false;
	}
}

int main() {
	cout << "KIEM TRA CO PHAI SO NGUYEN TO KHONG!\n";
	int so; cout << "Nhap so: "; cin >> so;
	for (int m = 1; m <= so; m++)
	{
		if (kiemtraSNT(m) == true) cout << m << " ";
	}
	return 0;
}