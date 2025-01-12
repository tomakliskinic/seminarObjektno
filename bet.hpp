#ifndef BET_H
#define BET_H

#include <iostream>
#include <vector>

using namespace std;

class Bet {
	int position;
	int amount;
public:
	
	Bet() 
	{
		position = 0;
		amount = 0;
	}

	Bet(int position, int amount)
	{
		this->position = position;
		this->amount = amount;
	}
	int getPosition() const
	{
		return position;
	}

	int getAmount() const
	{
		return amount;
	}

	void setAmount(int amount)
	{
		this->amount = amount;
	}
};

#endif