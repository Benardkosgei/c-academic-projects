//
//  wip_lab4
//  Zadanie 1
//  Porównywanie łańcucha znaków do wzorca
//	'*' - dowolny łańcuch znaków (nawet pusty)
//	'?' - dowolna litera
//
//  Autor: Patryk Barczak

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 256

bool match(char* wzorzec, char* lancuch) {
	int length = strlen(lancuch);

	if(*wzorzec == '*') {
		char *nextWzorzec = wzorzec + 1;

		for(int i = 0; i <= length; ++i) {
			if(match(nextWzorzec, lancuch + i))
				return true;
		}
		return false;
	}

	return(((*wzorzec == '\0') && (*lancuch == '\0')) || 
		(((*wzorzec == *lancuch) || (*wzorzec == '?')) && match(wzorzec+1, lancuch+1)));
}

int main() {
	char wzor[SIZE];
	char lanc[SIZE];

	printf("Podaj wzorzec: ");
	fgets(wzor, sizeof(wzor), stdin);
	printf("Podaj lancuch: ");
	fgets(lanc, sizeof(lanc), stdin);

	if(match(wzor, lanc))
		printf("OK\n");
	else
		printf("NIE OK\n");

	return 0;
}
