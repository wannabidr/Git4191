#include <stdio.h>

bool is_prime(int n) {
	if (n <= 1) return false;
	for (int i=2; i*i<=n; ++i) {
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
	for(int i=0; i<100; i++) {
		if(i+1 % 2 == 1) {
			printf(i+1);
			printf("\n");
		}
	}
	for(int i=0; i<100; i++) {
		if(i+1 % 2 == 0) {
			printf(i+1);
			printf("\n");
		}
	}
	for (int i=0; i<100; i++) {
		if(is_prime(i+1)) {
			printf("%d\n", i+1);
		}
	}
	return 0;
}

