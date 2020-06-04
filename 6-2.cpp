#include <iostream>



int main() {
	int num[9] = {};
	int temp = 0;
	int max;
	int i, j;

	for (i = 0; i < 9; i++) {
		std::cin>>num[i];
	}
	max=num[0];
	for (j = 0; j < 9; j++) {
		if (max < num[j]) {
			max = num[j]; 
			temp = j+1;
		}

	}

	std::cout << max << "\n" << temp;
}