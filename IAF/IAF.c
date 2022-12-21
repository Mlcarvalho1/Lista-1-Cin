#include <stdio.h>

float iafCalc(long int x, long int y) {
	return (x*x*2.71)/y;
}

float iafChecker(float i, int k) {
	if(i < 32.5){
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Calouro.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Calouro.\n", k, i);
		}
	} else if(i >= 32.5 && i < 64 ) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Iniciado.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Iniciado.\n", k, i);
		}
	} else if(i >= 64 && i < 128 ) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Morador do Grad.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Morador do Grad.\n", k, i);
		}
	} else if(i >= 128 && i < 256 ) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Matemático Discreto.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Matemático Discreto.\n", k, i);
		}
	} else if(i >= 256 && i < 512 ) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Conserta Impressoras.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Conserta Impressoras.\n", k, i);
		}
	} else {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Sem volta.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Sem volta.\n", k, i);
		}
	}
	return 0;
}

int main() {
	long int x1, y1, k1, x2, y2, k2, x3, y3, k3;

	scanf("%ld%ld%ld", &x1, &y1, &k1);
	scanf("%ld%ld%ld", &x2, &y2, &k2);
	scanf("%ld%ld%ld", &x3, &y3, &k3);

	float i1 = iafCalc(x1, y1), i2 = iafCalc(x2, y2), i3 = iafCalc(x3, y3);

	iafChecker(i1, k1);
	iafChecker(i2, k2);
	iafChecker(i3, k3);

	return 0;
}