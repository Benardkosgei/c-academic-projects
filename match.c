//
//  The function determine the compability of the pattern with a chain.
//	'*' - the compability with any, even empty, series of signs in the chain.
//	'?' - the compability with any other sign.
//	Other signs means compability only with itselves.
//
//  Author: Patryk Barczak

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 256

bool match(char* pattern, char* chain) {
	int length = strlen(chain);

	if(*pattern == '*') {
		char *nextPattern = pattern + 1;

		for(int i = 0; i <= length; ++i) {
			if(match(nextPattern, chain + i))
				return true;
		}
		return false;
	}

	return(((*pattern == '\0') && (*chain == '\0')) || 
		(((*pattern == *chain) || (*pattern == '?')) && match(pattern+1, chain+1)));
}

int main() {
	char ptrn[SIZE];
	char chn[SIZE];

	printf("Give a pattern: ");
	fgets(ptrn, sizeof(ptrn), stdin);
	printf("Podaj chain: ");
	fgets(chn, sizeof(chn), stdin);

	if(match(ptrn, chn))
		printf("OK\n");
	else
		printf("NIE OK\n");

	return 0;
}
