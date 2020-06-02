#include <iostream>

int main() {
	int i, j;
	int n;
	std::cin >> n;
	for (i = 0; i < n*2; i++) {
		for (j = 0; j < n; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					std::cout << "*";
				}
				else std::cout << " ";
				
			}
			
			else {
				if (j % 2 == 0) {
					std::cout << " ";
				}
				else std::cout << "*";
				
			}
			
		}
		std::cout << std::endl;
	
		
		
	
	}
}