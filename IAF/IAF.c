#include <stdio.h>

double iafCalc(double x, double y) {
	return (x*x*2.71)/y;
}

double iafChecker(double i, int k) {
	if(i < 0) {
		i = i * -1;
	}
	if(i < 32.5) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Calouro.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Calouro.\n", k, i);
		}
	} else if(i >= 32.5 && i < 64 ) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Iniciado.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Iniciado.\n", k, i);
		}
	} else if(i >= 64 && i < 128 ) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Morador do Grad.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Morador do Grad.\n", k, i);
		}
	} else if(i >= 128 && i < 256 ) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Matemático Discreto.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Matemático Discreto.\n", k, i);
		}
	} else if(i >= 256 && i <= 512 ) {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Conserta Impressoras.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Conserta Impressoras.\n", k, i);
		}
	} else {
		if(k == 3) {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Sem volta.", k, i);
		} else {
			printf("O aluno de índice %d possui o valor IAF igual a %.2lf e a descrição de Sem volta.\n", k, i);
		}
	}
	return 0;
}

int main() {
	int k1, k2, k3;
	double x1, y1, x2, y2, x3, y3;

	scanf("%lf%lf%d", &x1, &y1, &k1);
	scanf("%lf%lf%d", &x2, &y2, &k2);
	scanf("%lf%lf%d", &x3, &y3, &k3);

	double i1 = iafCalc(x1, y1), i2 = iafCalc(x2, y2), i3 = iafCalc(x3, y3);

	iafChecker(i1, k1);
	iafChecker(i2, k2);
	iafChecker(i3, k3);

	return 0;
}