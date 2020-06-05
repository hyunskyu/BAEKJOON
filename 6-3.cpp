#include <iostream>


int main() {
	int num[3] = {};
	int arr[10] = {};
	int res = 1;

	for (int i = 0; i < 3; i++) {
		std::cin >> num[i];
		res *= num[i];
	}

	while (res > 0) {
		arr[res % 10] += 1;
		res /= 10;
	}

	for (int j = 0; j < 10; j++) {
		std::cout << arr[j] << std:: endl;
	}
	
	


}
