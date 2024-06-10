#include <cstdio>
#include <cmath>
#include <iostream>

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
  float fVal{};
  int numValues{};

  printf("Quanti valori vorresti dichiarare?: ");
  scanf("%d", &numValues);

  float valList[numValues];

  for (int i = 0; i < numValues; ++i) {
    printf("Inserisci il valore %d dell\'array di valori: ", i+1);
    scanf("%f", &fVal);
    valList[i] = fVal;
  }

  // Somma i valori
  float valSum{};
  for (int i = 0; i < numValues; ++i) {
    valSum = valSum + valList[i];
  }

  fVal = (valSum/numValues);

  printf("\n\n");

  printf("*** Valori arrotondati alla seconda cifra decimale ***\n");
  printf("Valore medio: %.2f\n", fVal);
  printf("L\'area del quadrato di lato D: %.2f\n", areaQuad(fVal));
  printf("L\'area del cerchio di diametro D: %.2f\n", areaCer(fVal));
  printf("L\'area del triangolo equilatero di lato D: %.2f\n\n", areaTre(fVal));

  printf("*** Valori non arrotondati (float) ***\n");
  printf("Valore medio: %f\n", fVal);
  printf("L\'area del quadrato di lato D: %f\n", areaQuad(fVal));
  printf("L\'area del cerchio di diametro D: %f\n", areaCer(fVal));
  printf("L\'area del triangolo equilatero di lato D: %f\n\n", areaTre(fVal));

  return 0;
}
