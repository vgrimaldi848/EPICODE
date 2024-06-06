#include <cstdio>
#include <cmath>

float areaQuad(double lato) {
	double areaQuad {lato*lato};
	return areaQuad;
}

float areaCer(double diametro) {
	double areaQuad {M_PI*pow(diametro/2,2)};
	return areaQuad;
}

float areaTre(double lato) {
	double areaQuad {(sqrt(3)/4)*lato*lato};
	return areaQuad;
}


int main() {
	float dVal {};
	printf("Inserisci il valore di D: ");
	scanf("%f", &dVal);
	printf("L’area del quadrato di lato D: %f", areaQuad(dVal));
	printf("\n");
	printf("L’area del cerchio di diametro D: %f", areaCer(dVal));
	printf("\n");
	printf("L’area del triangolo equilatero di lato D: %f", areaTre(dVal));
	printf("\n");
	return 0;
}

