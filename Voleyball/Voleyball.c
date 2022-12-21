	#include <stdio.h>

	int main() {
		int A, B, C, D, E, F, G, H, isEveryOneFine = 1;
		scanf("%d \n %d \n %d \n %d \n %d \n %d \n %d \n %d", &A, &B, &C, &D, &E, &F, &G, &H );

		if(A == C || A == E || A == G) {
			printf("CARLOS JOGOU COM MULHER >:( \n");
			isEveryOneFine = 0;
		}

		if(B == A || B == D) {
			printf("Bianca não aceita jogar com Alan nem com Daniela.\n");
			isEveryOneFine = 0;
		}

		if(H != G && H != F) {
			printf("Helen só joga com Gabriel ou Fernanda.\n");
			isEveryOneFine = 0;
		}

		if(G == H && D != C){
			printf("Se Gabriel jogar com Helen, Daniela precisa jogar com Carlos. \n");
			isEveryOneFine = 0;
		}

		if(C == E && F != A) {
			printf("Se Carlos jogar com Erasmo, Fernanda jogará com Alan. \n");
			isEveryOneFine = 0;
		};

		if(C != E && F == A) {
			printf("Se Carlos jogar com qualquer outra pessoa, Fernanda não jogará com Alan.\n");
			isEveryOneFine = 0;
		};

		isEveryOneFine ? printf("Conseguimos times suficientes!") : printf("Alguem nao esta satisfeito...");
	}