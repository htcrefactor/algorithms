#include <iostream>

using namespace std;

int main(void) {
	int M = 0;
	int N = 0;

	cin >> M;
	for(N = 1 ; N <= M ; N++) {
		int i = N;
		int temp = i;

		while(i) {
			temp = temp + (i % 10);
			i = i / 10;
		}

		if(temp == M) {
			cout << N;

			return 0;
		}
	}

	cout << "0";

	return 0;
}

