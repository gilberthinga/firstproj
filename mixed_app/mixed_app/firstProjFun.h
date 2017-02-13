#pragma once

int fScan(void)
{
	int dpi = 0, farbtiefe = 0;
	float breite = 0, hoehe = 0;
	double groesse = 0.00;

	printf("Bitte geben Sie die DPI ein: ");
	scanf("%i", &dpi);
	
	printf("Bitte geben Sie die Farbtiefe ein: ");
	scanf("%i", &farbtiefe);

	printf("Bitte geben Sie die Breite in cm ein: ");
	scanf("%f", &breite);
	
	printf("Bitte geben Sie die Hoehe in cm ein: ");
	scanf("%f", &hoehe);

	groesse = ((((breite * dpi) / 2.54) * (hoehe * dpi) / 2.54) * farbtiefe)/8 /1024 /1024;

	printf("Die zu erwartende Gr\x94\xE1\e entspricht %.4lf MIB\n",groesse);
	return 0;
}

int fKinder(void)
{
	int kinder = 0, eier = 0, erhalten = 0,rest = 0;

	printf("Willkommen zum Kindergeburstag\n"
			"Wie vile Kinder?\n");

	scanf("%i", &kinder);
	
	printf("Wie viele \x9a\x62\erraschungseier hast du?\n"
			"Ich hoffe mehr als Kinder sonst gibt es Streit\n");
	
	scanf("%i", &eier);
	
	erhalten = eier / kinder;

	rest = eier%kinder;

	printf("Es wurden %i Kinder eingeladen und jedes hat %i \x9a\x62\erraschungseier erhatlen\n"
		"Es bleiben noch %i \x81\x62rig\n", kinder, erhalten, rest);

	return 0;
}