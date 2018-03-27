/* inmatnin.c */
/*Developer: MissTurkos*/
#include ".\Include-Inmatning\inmatnin.h"

void Inmatning( double* kapitalPek, int* antalArPek ){
	/* clrscr();   /* finns ej i ANSI-C */  
	printf("\nBeräknar kapitaltillv„xt vid %0.1f%% r„nta",RANTESATS);
	printf("\n+=============================================+");
	printf("\nPositivt kapital räknar framåt i tiden.");
	printf("\nNegativt kapital räknar bakåt i tiden.");
	printf("\n\nInsatt kapital och antal år ?(-->(+/-)1000 10)--> ");
	scanf("%lf%d", kapitalPek, antalArPek);

	return;
}
