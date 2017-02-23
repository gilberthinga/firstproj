#pragma once
#include <stdio.h>


int fZeit()
{

	unsigned int sek, min, std, tag, zeit;
	
	printf("Bitte geben sie die Zeit in sek ein:");
	scanf("%u", &zeit);

	sek = zeit % 60;
	min = zeit / 60;
	std = min / 60;
	min = min % 60;
	tag = std / 24;
	std = std % 24;

	printf("Um gerechnet besteht ihre Eingabe aus\n%u Tage\n%u Stunden\n%u Minuten \n%u Sekunden\n", tag, std, min, sek);

	return 0;
}