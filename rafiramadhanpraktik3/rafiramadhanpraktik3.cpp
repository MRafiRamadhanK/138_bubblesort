
#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
	while (true) {
		cout << "Masukan banyaknya element pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "nArray dapat mempunyai maksimal 20 elemen.n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "===================== " << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}
}

void bubbleSortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		pass = pass + 1;
	} while (pass <= n - 1);
}

void display() {
	cout << endl;
	cout << "============================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "============================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {

	input();
	bubbleSortArray();
	display();
	system("pause");

	return 0;
}