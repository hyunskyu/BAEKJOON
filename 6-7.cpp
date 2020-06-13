
#include <iostream>

int main() {
	int i, j, k;
	int num1,num2;
	float score[1000] = {};
	int sub[1000] = {};
	float res[1000] = {};
	float count = 0;

	std::cin >> num1;
	for (i = 0; i < num1; i++) {
		std::cin >> num2;
		sub[i] = num2;
		for (j = 0; j < num2; j++) {
		
				std::cin >> score[j];
				res[i]+=score[j];
			
		}
		res[i] = res[i] / sub[i];
		count = 0;
		for (k = 0; k < num2; k++) {
			if (res[i] < score[k]) {
				count++;
			}
		}
		std::cout << std::fixed;
		std::cout.precision(3);
		std::cout << (count / sub[i])*100<<std::endl;
	}
	

}