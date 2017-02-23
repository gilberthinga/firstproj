// Array.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	// Ein oder Mehrdimensionale Arrays

	int aZahl[3];
	

	aZahl[0] = 10;
	aZahl[1] = 20;
	aZahl[2] = 30;

	int bZahl[3];
	
	int a = 1;
	
	for (int i = 0; i < 3; i++)
	{
		printf("%i ", aZahl[i]);
	}
	
	printf("\n");

	int cZahl[3];
	
	int j = 1;

	for (int i = 0; i < 3; i++)
	{
		cZahl[i] = j;

		j *= 10;

		printf("%i ", cZahl[i]);
	}
	printf("\n");
	
	//-------------Eindimensonalechar array


	char str1[6];

	str1[0] = 'H';
	str1[1] = 'a';
	str1[2] = 'l';
	str1[3] = 'l';
	str1[4] = 'o';
	str1[5] = '\0'; // der Null terminator wird auto vergeben

	char str2[6] = { 'H','a','l','l','o','\0' };	 // der Null terminator wird auto vergeben
	
	// andere Varieante
	
	char str3[] = { "Hallo Welt" };


	//Ausgabe 

	printf("%s \n", str1);
	printf("%s \n", str2);
	printf("%s \n", str3);

	return 0;

}

