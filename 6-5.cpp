/*
#include <iostream>

int main() {
	float score[1000] = {};
	int num;
	float max;
	float res=0;

	std::cin >> num;
	for (int i = 0; i < num; i++) {
		std::cin >> score[i];
	}

	max = score[0];
	for (int j = 0; j < num; j++) {
		if (max < score[j]) {
			max = score[j];
		}
	}
	
	for (int k = 0; k < num; k++) {
		res += (float)(score[k] / max);
	}

	res = (res / num)*100;

	std::cout << res;
}
*/