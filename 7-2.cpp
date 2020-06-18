/*
#include <iostream>

int d(int n);
int arr[10001] = {0,};

int main() {

	for (int i = 1; i < 10000; i++) {
		int index=d(i);

		if (index <= 10000) {
			arr[index] = 1;
		}

	}
	for (int i = 1; i < 10001; i++) {
		if (arr[i] == 0) std::cout << i<<std::endl;
	}

}

int d(int n) {
	int num[5] = { 0, };
	int res = n;

	for (int i = 0; i < 4; i++) {
		num[i] = n % 10;
		n = n / 10;
	}
	for (int j = 0; j < 4; j++) {
		res += num[j];
	}

	return res;

}
*/