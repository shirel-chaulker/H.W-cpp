#include "Ball.h"
#include <stdio.h>
#include <iostream>

int countpass = 0;
void Ball :: pass()
{

	countpass++;
}
void Ball::kick(char* name)
{
	printf("%s- kick the ball\n", name);
}

int bounce = 0;
void Ball::bounceABall()
{
	bounce++;

}

Ball::Ball(int aprice, char* atype, char* acolor) {
	

	price = aprice;
	strcpy_s(type, atype);
	strcpy_s(color, acolor);
	


}

