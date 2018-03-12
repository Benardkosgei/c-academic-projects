//
//  wip_lab2
//	Zadanie 5
//	Wyliczenie liczby par liczb względnie pierwszych mniejszych od n
//
//  Autor: Patryk Barczak

#include<stdio.h>
#include <math.h>

int nwd(int a, int b) {
	int c = a%b;

	while(c != 0) {
		a = b;
		b = c;
		c = a%b;
	}

	return b;
}

int liczbaPar(int n) {
	int suma = 0;

	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++) //pary a,b i b,a są różne
			if(nwd(i,j) == 1)
				suma++;

	return suma;
}

int main() {
	float x;

	for(int n = 1; n <= 1000; n++) {
		x = liczbaPar(n)/pow(n,2);
		printf("%d;%f\n", n,x);
	}
	

	return 0;
}
