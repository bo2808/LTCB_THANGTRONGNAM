// LTCB_THANGTRONGNAM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	int thang; cout << "Nhap thang:"; cin >> thang; 
	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << "Thang" << "co 31 ngay" << endl; break;

	case 4: case 6: case 9: case 11:
		cout << "Thang" << "co 30 ngay" << endl; break;

	case 2: cout << "Thang" << "co 28-29 ngay" << endl; break;


	default:cout << "khong co thang" << "Thang" << endl; break;


	}
		
	return 0;

}
	

