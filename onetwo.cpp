#include <iostream>
#include <cmath>
using namespace std;
int main() {
	char nguoi1, nguoi2;
	cin >> nguoi1;
	switch(nguoi1) {
		case 'B':
		case 'b':
			cin >> nguoi2;
			switch(nguoi2) {
				case 'B':
				case 'b':
					cout << "Hoa nhau!";
					break;
				case 'K':
				case 'k':
					cout << "Nguoi 1 thang!";
					break;
				case 'L':
				case 'l':
					cout << "Nguoi 2 thang!";
					break;
				default:
					cout << "Khong hop le!";
					break;			
			}
			break;
		case 'L':
		case 'l':
			cin >> nguoi2;
			switch(nguoi2) {
				case 'B':
				case 'b':
					cout << "Nguoi 1 thang!";
					break;
				case 'K':
				case 'k':
					cout << "Nguoi 2 thang!";
					break;
				case 'L':
				case 'l':
					cout << "Hoa nhau!";
					break;
				default:
					cout << "Khong hop le!";
					break;			
			}
			break;
		case 'K':
		case 'k':
			cin >> nguoi2;
			switch(nguoi2) {
				case 'B':
				case 'b':
					cout << "Nguoi 2 thang!";
					break;
				case 'K':
				case 'k':
					cout << "Hoa nhau!";
					break;
				case 'L':
				case 'l':
					cout << "Nguoi 1 thang!";
					break;
				default:
					cout << "Khong hop le!";
					break;			
			}
			break;
		default:
			cout << "Khong hop le!";
			break;			
	}
}
