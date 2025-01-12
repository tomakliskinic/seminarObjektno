#ifndef PLAYER_H
#define PLAYER_H
#include "bet.hpp"
#include <vector>
#include <string>

using namespace std;

extern const int INITIAL_BALANCE;

class Person
{
public:
    Person() : name("Guest"){}
    Person(const string& personName) : name(personName) {}
    string getName();
protected:
    string name;
};

class Gambler : public Person
{
public:
    Gambler() : Person(), balance(INITIAL_BALANCE), wins(0), games(0) {}

    Gambler(const string& gamblerName);

    int getBalance();
    int getWins();
    int getGames();

protected:
    int balance;
    int wins;
    int games;
};

class Player : public Gambler
{
public:
    Player() : Gambler() {}
    Player(const string& playerName) : Gambler (playerName) {}

    void placeBet(int position, int amount);
    void displayBets();
    float getWinrate();
    void WinCheck(int roll, string colour);
    bool emptyBets();

private:
    
    vector<Bet> bets;
};

#endif