// zeichen_begrenzen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{


	unsigned int n = 0;

	printf("Bitte geben sie eine drei stellige Zahl ein");
	scanf("%3u", &n);

	n = n % 256; // nur Codes bis 256 zulassen

	printf("Das Zeichen %c\n", n);
	printf("Die Dezimalzahl %u\n", n);





    return 0;
}

