#include <iostream>
#include <string>

using namespace std;

void maximum(int* arr1, int len) {
	int max = *arr1;
	for (int a = 0; a < len; a++) {
		if (max < *(arr1 + a))
			max = *(arr1 + a);
	}
	cout << "Max: " << max << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	int arr1[] = { 1, 2, -3, 4, 5, -6 };
	maximum(arr1, 6);

	return 0;
}