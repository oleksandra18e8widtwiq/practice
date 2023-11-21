#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");
	int arr[] = { 7, -6, 43, -7, 641, 92, 34, 2, 12 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int even_sum = 0;
	int odd_sum = 0;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			even_sum += arr[i];
		}
		else {
			odd_sum += arr[i];
		}
	}

	cout << "Сума елементів масиву, що стоять на парних позиціях: " << even_sum << endl;
	cout << "Сума елементів масиву, що стоять на непарних позиціях: " << odd_sum << endl;

	return 0;
}
