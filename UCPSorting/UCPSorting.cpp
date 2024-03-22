//1.Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
//2.Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen - elemen.
//3.Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih ? Jelaskan mengapa.

//Jawab
//1.Dengan membandingkan elemen yang disetorkan ke index 0 dengan elemen yang sudah disetorkan ke index 1
//2.Dengan memilih jarak antara elemen yang ada di grup yang akan dipisahkan kedalam bentuk multiple sublist dan mengaplikasikan insertion sort ke beberapa sublist untuk memindahkan element ke posisi yang benar.
//3.
//4.

#include <iostream>
using namespace std;

int i, n, temp, j;
int arr[10];

void input() {
	int d;
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : "; 
		cin >> n;
		if (n <= 10)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> arr[i];
	}
}

void InsertionSort() {

	for (i = 1; i <= n - 1; i++) {
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j = 1] = temp;
			j--;
		}
		cout << "pass" << n - 1 << ":";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << ":";
		}
		cout << endl;
	}
}

void display() {
	cout << endl;
	cout << "================================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "================================" << endl;
	cout << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << "--->";
		}
	}
	cout << endl;
	cout << endl;
}

int main()
{
	input();
	InsertionSort();
	display();

	return 0;
}