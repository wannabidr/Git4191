#include <stdio.h>

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
	return 0;
}

