#include <iostream>
#include <cmath>
using namespace std;
int kt(int thang) {
	int nam;
	if(thang >= 1 && thang <= 2)
	{
		if(thang == 1 || thang == 3 || thang == 5 || thang == 7
		|| thang == 8 || thang == 10 || thang == 12) {
			cout << thang << " co 31 ngay!";	
		} else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
			cout << thang << " co 30 ngay!";
		} else {
			cin >> nam;
			if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
				cout << thang << " co 29 ngay!";
			} else {
				cout << thang << " co 28 ngay!";
			}	
		}
	} else {
		cout << "Thang ban nhap khong hop le!";
	}
}

int ktChanLe(int a) {
	if(a % 2 == 0) {
		cout << "So " << a << " la so chan!";
	} else {
		cout << "So " << a << " la so le!";
	}
}

int main() {
	int a;
	string c;
	cin >> a;
	c = (a > 0) ? " so a > 0 " : " so a <= 0 ";
	cout << c;
}


//viet chuong trinh giai pt bac 1:
//	ax + b = 0
//viet chuong trinh nhap vao 1 thang va xuat ra so ngay
//cua thang do: 
//input: 1
//output: 31
//input: 4
//output: 30	
//dk nam nhuan:
//((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
//bt3: kiem tra tinh chan le cua 1 so. 
//input: 2
//output: so chan
//input: 3
//output: so le
//
//bt4: giai pt bac 2: ax^2 + bx + c = 0
