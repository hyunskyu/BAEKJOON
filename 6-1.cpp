#include <iostream>

int num[1000000] = {};

int main() {
	int n;


	int min, max;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> num[i];
	}
	
	min = num[0];
	max = num[0];
	
	for (int j = 0; j < n; j++) {
		if (min > num[j]) {
			min = num[j];
		}
	}

	for (int k = 0; k < n; k++) {
		if (max < num[k]) {
			max = num[k];
		}
	}

	std::cout << min << " " << max;
}