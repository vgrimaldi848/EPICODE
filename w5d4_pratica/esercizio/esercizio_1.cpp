#include <cstdio>
#include <cmath>

float areaQuad(float lato) {
	float areaQuad {lato*lato};
	return areaQuad;
}

float areaCer(float diametro) {
	float areaCer{M_PI*pow(diametro/2,2)};
	return areaCer;
}

float areaTre(float lato) {
	float areaTre{(sqrt(3)/4)*lato*lato};
	return areaTre;
}

int main() {
	float dVal{};

	printf("Inserisci il valore di D: ");
	scanf("%f", &dVal);
	printf("\n");

	printf("L\'area del quadrato di lato D: %f", areaQuad(dVal));
	printf("\n");

	printf("L\'area del cerchio di diametro D: %f", areaCer(dVal));
	printf("\n");

	printf("L\'area del triangolo equilatero di lato D: %f", areaTre(dVal));
	printf("\n");

	return 0;
}
