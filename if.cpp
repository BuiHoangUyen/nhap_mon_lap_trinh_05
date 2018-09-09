#include <iostream>
using namespace std;
main() {
	//cau dieu kien
	//if
	//if...else..
	//if...else long nhau
	//switch...case
	//switch...case long nhau
//	1 + 1 = 2
//	a = 2;
//	1 + 1 == 2
//	a == 2;
// 	a != 2;
	int a, b;
	cin >> a;
	if(a != 0) {
		cin >> b;
		if(b > 0) {
			cout << "a va b deu lon hon 0!";
		}
		else {
			cout << "a lon hon b";
		}
	}
	else {
		cout << "So a nho hon bang 0!" << endl;
		cout << "Khong thoa man bai toan!";
	}
	
}
