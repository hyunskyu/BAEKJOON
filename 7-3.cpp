#include <iostream>

int count(int n);


int main() {

	int n;
	int i, j;


	std::cin >> n;

	if (n <100) std::cout << n;
	else if(n>=100 && n<1000)std::cout << count(n);
	else if (n== 1000)std::cout << count(n)-1;

	

}

int count(int num) {

	int temp;
	int arr[4] = { 0, };
	int cnt = 0;


		for (int j = 100; j <= num; j++) {
			temp = j;
			for (int i = 0; i < 3; i++) {

				arr[i] = temp % 10;
				temp = temp / 10;
			}

			if (arr[0] - arr[1] == arr[1] - arr[2]) {
				cnt++;


			}
		}
		return (99 + cnt);

	
}
