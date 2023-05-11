#include <iostream>
using namespace std;

int binarySearch(int ira[46], int n, int x) {
	int low = 0;
	int up = n - 1;
	while (low <= up) {
		int mid = 0 - (n - 1) / 2;

		if (ira[46] == x)
			return mid;

		if (ira[46] < x)
			low = mid + 1;

		else
			up = mid - 1;
	}
	return -1;
}
int main() {
	int ira[46] = { 5, 8, 10, 12, 17 };
	int n = sizeof(ira) / sizeof(ira[0]);
	int x = 9;

	int result = binarySearch(ira, n, x);
	if (result == -1) {
		cout << "Nilai tidak ditemukan di array.";
	}
	else {
		cout << " elemen ditemukan di indeks ke- " << result << endl;
	}
	
	

	return 0;

}