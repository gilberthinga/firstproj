// Zylinder_Funktionen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <math.h>

const double pi = 3.1415927;


double fVolumen(double height, double diameter) {

	double volume = 0.0;

	volume = pi*diameter*diameter*height / 4;

	return volume;
}

double fTurm(double schattenleange, double winkel) {

	double turmhoehe = 0.0;

	turmhoehe = schattenleange * tan(winkel * pi/180);

	return turmhoehe;
}




int main()
{
	double schattenleange = 0.0, winkel = 0.0, turm = 0.0, diameter = 0.0, height = 0.0;
	
	printf("++++++++++Volumen++++++++++\n");
	printf("Bitte geben sie die Hoehe ein:");
	scanf("%lf", &height);
	printf("\n");
	printf("Bitte geben sie den Durchmesser ein:");
	scanf("%lf", &diameter);
	printf("\n");
	printf("Das Volumen Betraegt %.2lf \n\n", fVolumen(height,diameter));

	printf("++++++++++Hoehe++++++++++\n");
	printf("Bitte geben sie die Schattenleange ein:");
	scanf("%lf", &schattenleange);
	printf("\n");
	printf("Bitte geben sie den Winkel ein:");
	scanf("%lf", &winkel);
	printf("\n");
	printf("Das Hoehe des Turms Betraegt %.2lf \n\n", fTurm(schattenleange, winkel));


    return 0;
}

