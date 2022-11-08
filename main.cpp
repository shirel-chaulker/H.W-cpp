#include <iostream>
#include "Ball.h"
#include <string.h>
#include "Car.h"
#include "blog.h"
#pragma warning (disable:4996)


int countKM = 0;
int main()
{
	
	/*char n1[] = "football";
	char n2[] = "red";
	n2[3] = NULL;
	Ball football(50,n1,n2);
	printf("%d %s %s", football.price, football.type, football.color);*/


	char b1[] = "222";
	Car kia(130, 0,b1);
	printf("%d\n", kia.countRide);
	kia.ride(25);

	strcpy_s(kia.color, "white");
	
	kia.numOfSeats = 5;
	
	kia.carStatus();
	 countKM = 0;


	char b2[] = "444";
	Car mazda(200, 0, b2);
	strcpy_s(mazda.color, "black");
	mazda.numOfSeats = 2;
	for (int i = 1; i < 6;++i)
	{
		mazda.ride(i);
	}
	mazda.carStatus();
	countKM = 0;
	

	char b3[] = "555";
	Car tesla(3, 0, b3);
	strcpy_s(tesla.color, "gold");
	tesla.numOfSeats = 4;

	for (int i = 1; i < 6;++i)
	{
		tesla.ride(i);
	}
	tesla.carStatus();



	char s1[] = "newBlog";
	char s2[] = "";
	Blog myBlog(s1, s2, 0);
	

	int userResponse = 0;;
	
	while (userResponse != 5)
	{
		printf("please press 1 for add line, 2 for print, 3 for save in file, 4 for load from file, 5 for exit");
		scanf("%d", &userResponse);
		printf("\n\n");
		switch (userResponse) {
		case 1: 
			 myBlog.addLine(s1);
			break;

		case 2:
			
			myBlog.print();
			break;

		case 3:

			myBlog.saveinFile();
			break;


		case 4:

			myBlog.loadFromFile();
			break;
		}
		

	}
	
	
}
