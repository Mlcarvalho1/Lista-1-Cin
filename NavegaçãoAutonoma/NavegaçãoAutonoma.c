#include <stdio.h>
#include <math.h>

int main() {
	int X, Y, Xa, Ya, Xb, Yb, Xc, Yc;
	float dXa, dXb, dXc, menor;
	scanf("%d%d %d%d %d%d %d%d", &X, &Y, &Xa, &Ya, &Xb, &Yb, &Xc, &Yc);

	dXa = sqrt(pow((X - Xa), 2) + pow((Y - Ya), 2));
	dXb = sqrt(pow((X - Xb), 2) + pow((Y - Yb), 2));
	dXc = sqrt(pow((X - Xc), 2) + pow((Y - Yc), 2));

	menor = dXa;

	if (dXb < dXa) {
		menor = dXb;
	}
	if (dXc < dXb) {
		menor = dXc;
	}

	if (menor == dXa) {
		printf("A");
		X = X + Xa;
		Y = Y + Ya;

		dXb = sqrt(pow((X - Xb), 2) + pow((Y - Yb), 2));
		dXc = sqrt(pow((X - Xc), 2) + pow((Y - Yc), 2));

		menor = dXb;

		if (dXc < dXb) {
			menor = dXc;
		}

		if (menor == dXb) {
			printf(" B C");
		} else {
			printf(" C B");
		}
	} else if (menor == dXb) {
		printf("B");
		X = X + Xb;
		Y = Y + Yb;

		dXa = sqrt(pow((X - Xa), 2) + pow((Y - Ya), 2));
		dXc = sqrt(pow((X - Xc), 2) + pow((Y - Yc), 2));

		menor = dXa;

		if (dXc < dXa) {
			menor = dXc;
		}

		if (menor == dXa) {
			printf(" A C");
		} else {
			printf(" C A");
		}
	} else if (menor == dXc) {
		printf("C");
		X = X + Xc;
		Y = Y + Yc;

		dXa = sqrt(pow((X - Xa), 2) + pow((Y - Ya), 2));
		dXb = sqrt(pow((X - Xb), 2) + pow((Y - Yb), 2));

		menor = dXa;

		if (dXc < dXa) {
			menor = dXc;
		}

		if (menor == dXa) {
			printf(" A B");
		} else {
			printf(" B A");
		}
	}

	// printf("\n%f %f %f", dXa, dXb, dXc);

	// printf("\n o menor é %f", menor);
}