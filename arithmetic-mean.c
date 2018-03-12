//
//  wip_lab2
//	Zadanie 2
//	Średnia arytmetyczna
//
//  Autor: Patryk Barczak

#include<stdio.h>
#include <assert.h>

int main() {
	int n;
	float liczba;
	float suma = 0;

	printf("Podaj liczbę: ");
	scanf("%d",&n);
	assert(n>0);

	printf("Podaj %d liczb/ę/y:\n", n);
	for(int i = 0; i<n; i++) {
		scanf("%f", &liczba);
		suma+=liczba;
	}

	printf("Średnia arytmetyczna tych liczb wynosi: %f\n", suma/n);

	return 0;
}
