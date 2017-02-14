// schaltjahr.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>



int main()
{

	int jahr, erg;

	printf("Bitte geben sie ein Jahr ein:\n");
	scanf("%i", &jahr);
	
	erg = jahr % 4 == 0 && (jahr % 100 != 0 || jahr % 400 == 0);

	erg == 1 ? printf("Das Jahr %i ist ein Schaltjahr\n", jahr) : printf("Das Jahr %i ist kein Schaltjahr\n", jahr);


    return 0;
}

