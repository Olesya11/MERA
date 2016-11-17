// the translation from degrees to radians.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
float angle;
char symbol;
printf("Please enter an angle. For example 40D or 40R: ");
scanf_s("%f%c", &angle ,&symbol);
if (symbol=='D')
{
	printf("R=%f", angle*3.14/180);
}
else if (symbol=='R')
{
	printf("D=%f",angle*180/3.14);
}
else
{
	printf ("Entered correct data");
}
getchar();
getchar();
getchar();
return 0;
}

