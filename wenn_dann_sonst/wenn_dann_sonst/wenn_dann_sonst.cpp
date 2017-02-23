// wenn_dann_sonst.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	 int i = 333;
	
	if(i==333)
	{
		printf("%i\n", i);

		i++;
	}
	else
	{
		printf("Bedingung ist nicht wahr\n");
	}
	printf("%i\n",i);

    return 0;
}

