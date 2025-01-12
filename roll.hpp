#ifndef ROLL_H
#define ROLL_H
#include <string>

using namespace std;

class Roll
{
public:
	Roll();
	int getNumber();
	string getColour();
	
private:
	int number;
	string colour;
	void roll();
};

#endif 