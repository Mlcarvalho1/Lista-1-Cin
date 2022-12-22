#include <stdio.h>

int main() {
	long long int N, A, B, Sn, Sa, Sb, Sab, X, Na, Nb, Nab;

	scanf("%lld %lld %lld", &N, &A, &B);

	if( A == 0 || B == 0) {
		printf("SEM RESPOSTA");
	} else {

	Na = N/A;
	Nb = N/B;
	Nab = N/(A*B);

	Sn = N*(1 + N) / 2;
	Sa = Na*(A + (Na*A)) / 2;
	Sb = Nb*(B + (Nb*B)) / 2;
	Sab = Nab*((A*B) + Nab*(A*B)) / 2;

	if(Na == 0) {
		Sa = 0;
	}

	X = Sn - (Sa + Sb) + Sab;

	(X / 2 != 0) ? printf("%lld\nOpa xupenio AULAS...", X) : printf("%lld\nLá ele!!!", X );
	}

}