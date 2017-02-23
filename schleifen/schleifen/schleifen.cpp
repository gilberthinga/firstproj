// schleifen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{

	for (int i = 0; i < 10; i++)
	{
		printf("Schleifendurchlauf %i\n", i);
	}

	//Alternative hat keinen Start Wert Deklaration auserhalb der Schleife, hat kein Inkrement

	int j = 0;
	while (j<10)
	{
		printf("Schleifendurchlauf %i\n", j);
		j++;
	}
 
	int i = 0;
	char passwort[10] = "";
	char benutzer[10] = "";
	do
	{
		printf("Beutzereingabe");
		scanf("%s", &benutzer);
		printf("Passeingabe");
		scanf("%s", &passwort);
		
		i++;

	} while ((passwort == "Hans" && benutzer == "Hans")&& i<2); 
	return 0;
}

