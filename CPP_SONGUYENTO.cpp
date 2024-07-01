#include <iostream>
using namespace std;
bool laSoNguyenTo2(int n)
{
	if (n < 2) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	if (n % 2 == 0) {
		return false;
	}
	for (int i = 3; i < (n - 1); i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cout << "nhap vao so can kiem tra: ";
	cin >> n;
	if (laSoNguyenTo2(n)) {
		cout << n << " la so nguyen to.";
	}
	else {
		cout << n << " khong phai la so nguyen to";
	}
	return 0;
}
