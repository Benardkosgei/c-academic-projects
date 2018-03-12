//
//  wip_lab2
//  Zadanie 1
//  Wypisanie jak najmniejszej ilości banknotów i monet mogących tworzyć podaną kwotę
//
//  Autor: Patryk Barczak

#include<stdio.h>
#include <assert.h>

int main() {
    int zlote;
    int grosze;
    int x; //
    
    //wczytanie złotych oraz groszy
    printf("Podaj liczbę złotych: ");
    scanf("%d",&zlote);
    printf("Podaj liczbę groszy: ");
    scanf("%d",&grosze);
    assert(zlote>=0 && grosze>=0);
    
    //x = zlote;
    
    if (zlote >= 10) { //sprawdzenie czy mogą być jakiekolwiek banknoty
        printf("Banknoty: \n");
    
        if (zlote >= 200) {
            x = zlote/200;
            printf("\t%d x 200 zł\n",x);
            zlote -= 200*x;
        }
        if (zlote >= 100) {
            x = zlote/100;
            printf("\t%d x 100 zł\n",x);
            zlote -= 100*x;
        }
        if (zlote >= 50) {
            x = zlote/50;
            printf("\t%d x 50 zł\n",x);
            zlote -= 50*x;
        }
        if (zlote >= 20) {
            x = zlote/20;
            printf("\t%d x 20 zł\n",x);
            zlote -= 20*x;
        }
        if (zlote >= 10) {
        	x = zlote/10;
        	printf("\t%d x 10 zł\n",x);
        	zlote -= 10*x;
    	}
    }
    
    if(zlote+grosze > 0) { //sprawdzenie czy są jakieś monety; może lepiej (zlote>0 || grosze>0)?
    	printf("Monety: \n");

    	if (zlote >= 5) {
        	x = zlote/5;
        	printf("\t%d x 5 zł\n",x);
        	zlote -= 5*x;
    	}
    	if (zlote >= 2) {
        	x = zlote/2;
        	printf("\t%d x 2 zł\n",x);
        	zlote -= 2*x;
    	}
    	if (zlote != 0)
        	printf("\t%d x 1 zł\n",x);
    
    	if (grosze >= 50) {
        	x = grosze/50;
        	printf("\t%d x 50 gr\n",x);
        	grosze -= 50*x;
    	}
    	if (grosze >= 20) {
        	x = grosze/20;
        	printf("\t%d x 20 gr\n",x);
        	grosze -= 20*x;
    	}
    	if (grosze >= 10) {
        	x = grosze/10;
        	printf("\t%d x 10 gr\n",x);
        	grosze -= 10*x;
    	}
    	if (grosze >= 5) {
        	x = grosze/5;
        	printf("\t%d x 5 gr\n",x);
        	grosze -= 5*x;
    	}
    	if (grosze >= 2) {
        	x = grosze/2;
        	printf("\t%d x 2 gr\n",x);
        	grosze -= 2*x;
    	}
    	if (grosze != 0) {
    		x = grosze;
        	printf("\t%d x 1 gr\n",x);
    	}
    }
    
    return 0;
}
