#pragma once
class Ball
{
public:
	char color[10];
	char type[10];
	int price;


	Ball( int aprice,char* atype,char* acolor);


	void pass();
	void kick(char* name);
	void bounceABall();
	
};



