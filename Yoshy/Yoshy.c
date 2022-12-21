	#include <stdio.h>

	float custoBeneficio(c, v)
	{
		return (v / c);
	}

	int main()
	{
		int m, g, r, p, y;
		float cbg, cbr, cbp, cby;
		char maior;
		scanf("%d", &m);
		scanf("%d%d%d%d", &g, &r, &p, &y);

		cbg = custoBeneficio(g, 80);
		cbr = custoBeneficio(r, 100);
		cbp = custoBeneficio(p, 120);
		cby = custoBeneficio(y, 80);

		if (g <= m) {
			maior = 'g';
		}

		if (cbr > maior && r <= m) {
			maior = 'r';
		}

		if (cbp > maior && p <= m) {
			maior = 'p';
		}

		if (cby > maior && y <= m) {
			maior = 'y';
		}

		switch (maior) {
		case 'g':
			printf("Verde");
			break;
		case 'r':
			printf("Vermelho");
			break;
		case 'p':
			printf("Roxo");
			break;
		case 'y':
			printf("Amarelo");
			break;
		default:
			printf("Acho que vou a pe :(");
			break;
		}

	}