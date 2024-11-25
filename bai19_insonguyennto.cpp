#include <iostream>
using namespace std;
int main()
{
	cout << "kiem tra so con phai so nguyen to khong\n";
	int so;
	cout << "nhap so:"; cin >> so;
	int dem = 0;
	for (int i = 1; i <= so; i++)
	{
		if (so % i == 0)
		{
			dem++;
		}
	}
	cout << "sodem=" << dem << endl;
	if (dem == 2) {
		cout << "so" << so << "la so nguyen to\n";
	}
	else
	{
		cout << "so" << so << "khong phai la so nguyen to\n";
	}
	return 0;
}