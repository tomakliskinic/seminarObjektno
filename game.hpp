#ifndef GAME_H
#define GAME_H
#include "player.hpp"

using namespace std;

class Game
{
public:
	virtual void play() = 0;
	virtual void gameOver() = 0;
};

class rouletteGame : public Game
{
public:
	rouletteGame();
	
private:
	void play() override;
	void gameOver() override;
	void victory(Player player);
	void playRoulette(Player player);
};
#endif