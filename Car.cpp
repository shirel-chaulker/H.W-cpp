#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Car.h"
#pragma warning (disable:4996)

Car::Car(int akm, int acountRide, char* acarNumber)
{
	km = akm;
	countRide = acountRide;
	strcpy_s(carNumber, acarNumber);

}
 
void Car::ride(int bKM)
{
	this->countRide += bKM;
	countKM++;
}

void Car::carStatus()
{
	int avg = this->countRide/countKM;
	printf("%d %s %s %d %d\n", this->km, this->color, this->carNumber, this->numOfSeats, this->countRide);
	printf("the avg km is: %d\n", avg);
	
}



