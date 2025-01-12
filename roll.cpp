#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>
#include "roll.hpp"
#include "display.hpp"

using namespace std;

void Roll::roll()
{
	srand(time(NULL));
	int x;

	for (int i = 0; i < 100; i++) {
		system("cls");
		x = rand() % 37;
		numberDisplayGen(x / 10, x % 10);
		int colourArray[37] = { 2,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1 };

		cout << "\n\n";
		if (colourArray[x] == 1)
		{
			cout << "Colour: RED" << endl;
			colour = "RED";
		}
		else if (colourArray[x] == 0)
		{
			cout << "Colour: BLACK" << endl;
			colour = "BLACK";
		}
		else
		{
			cout << "Colour: GREEN" << endl;
			colour = "GREEN";
		}
		if (i < 50)
			this_thread::sleep_for(chrono::milliseconds(25));
		else if (i < 75)
			this_thread::sleep_for(chrono::milliseconds(50));
		else if (i < 90)
			this_thread::sleep_for(chrono::milliseconds(100));
		else if (i < 95)
			this_thread::sleep_for(chrono::milliseconds(200));
		else if (i < 98)
			this_thread::sleep_for(chrono::milliseconds(300));
		else
			this_thread::sleep_for(chrono::milliseconds(500));
		number = x;
	}

}

Roll::Roll()
{
	roll();
}

int Roll::getNumber()
{
	return number;
}

string Roll::getColour()
{
	return colour;
}