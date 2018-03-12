//
//  wip_lab4
//  Zadanie 2
//  MASTERMIND
//
//  Autor: Patryk Barczak

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

#define OMEGA 1296

int main() {
	int kody[OMEGA][4];
	int white;
	int black;
	int n = OMEGA;
	int runda = 1;

	//Przygotowanie do losowania
	
	time_t tt;
    int zarodek = time(&tt);
    srand(zarodek);

    //Wypełnienie tablicy wszystkimi kodami

    for(int i = 0; i < OMEGA; ++i) {
    	int x = i;
    	for (int j = 3; j >= 0; --j) {
    		kody[i][j] = (8 + (x % 6)) % 7;
    		x = x/6;
    	}
    }

    printf("\n----MASTERMIND----\n\n");
  
    while(n > 0) {
    	printf("RUNDA %d\n\n", runda);
    	
    	//Wylosowanie indeksu
    	int los = rand() % n;
    	int klucz[4];

    	//Wydrukowanie wylosowanego kodu
    	//oraz przypisanie go do zmiennej klucz
    	for (int i = 0; i < 4; ++i) {
    		klucz[i] = kody[los][i];
			printf("%d", klucz[i]);
    	}
		printf("\n");

		//Odczyt wyniku
		printf("CZARNE:");
		scanf("%d", &black);
		//Koniec gry jeśli są 4 czarne
		if(black == 4) {
			printf("\nKONIEC GRY\n");
			return 0;					//Zakończenie całego programu
		}
		printf("BIAŁE:");
		scanf("%d", &white);
		printf("\n");
		assert(white >= 0 && black >= 0 && white + black < 5);

		//Usunięcie wylosowanej liczby z kodów
   		for(int i = los+1; i < n; ++i)
   			for(int j = 0; j < 4; ++j)
   				kody[i-1][j] = kody[i][j];
   		n--;

		//Uporządkowanie tablicy
		int doZostawienia = 0;
		for(int i = 0; i < n; ++i) {
			int tmpBlack = 0;
			int tmpWhite = 0;
			int tmpKlucz[4];
			int tmpKod[4];
			
			for (int j = 0; j < 4; ++j) {
				tmpKod[j] = kody[i][j];
				tmpKlucz[j] = klucz[j];
				if (tmpKod[j] == klucz[j]) {
					tmpBlack++;
					tmpKod[j] = 0;
					tmpKlucz[j] = 9;
				}
			}
			for (int j = 0; j < 4; ++j) {
				if (tmpKod[j] != 0) {
					for (int k = 0; k < 4; ++k) {
						if (tmpKod[j] == tmpKlucz[k]) {
							tmpWhite++;
							tmpKlucz[k] = 9;
							break;
						}
					}
				}
			}
			if (tmpWhite == white && tmpBlack == black) {
				for (int j = 0; j < 4; ++j) {
					kody[doZostawienia][j] = kody[i][j];
				}
				doZostawienia++;		
			}
		}

		//Ograniczenie tablicy kodów do pozostałych
		n = doZostawienia;

		runda++;
    }

    //Jeśli doszło do tego momentu to gracz musi oszukiwać
    printf("OSZUKUJESZ\n");

    return 0;
}
