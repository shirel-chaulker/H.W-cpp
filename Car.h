

#pragma once
class Car
{
public:
	int km;
	char color[20];
	char carNumber[30];
	int numOfSeats;
	int countRide;

	Car(int akm,int acountRide,char* acarNumber);

	void ride(int bKM);
	void carStatus();
	
};

extern int countKM;

