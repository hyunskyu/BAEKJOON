/*
#include <iostream>
#include <cstring>

int main() {
	char OX[81] = {};
	int num;
	int res=0;
	int count = 0;


	std::cin >> num;
	for (int i = 0; i < num; i++) {
		std::cin >> OX;

		res = 0;
		count = 0;
		for (int j = 0; j < strlen(OX); j++) {
			if (OX[j] == 'O') {
				++count;
				res += count;
			}
			else if (OX[j] == 'X') {
				count = 0;
			}

		}
		std::cout << res<<std::endl;

	}
	
}
	*/