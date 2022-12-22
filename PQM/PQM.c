	#include <stdio.h>

	int main() {
		int N, X, Y, Z;

		scanf("%d\n%d\n%d\n%d", &N, &X, &Y, &Z);

		if(N >= X + Y + Z) {
			printf("3");
		} else if (N >= X + Y || N >= X + Z || N >= Y + Z) {
			printf("2");
		} else if( N >= X || N >= Y || N >= Z) {
			printf("1");
		} else {
			printf("0");
		}
	}