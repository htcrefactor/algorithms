#include <stdio.h>
#include <math.h>

int main() {
	int input[100000];
	int n, k= 0;
	scanf("%d %d", &n, &k);
	for(int i = 0 ; i < n ; i++) {
		scanf("%d", &input[i]);
	}

	printf("%d", (int)ceil((float)(n-1)/(float)(k-1)));
	
	return 0;
}