#include "player.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

const int INITIAL_BALANCE = 2500;

Gambler::Gambler(const string& playerName) : Person(playerName) 
{
	wins = 0;
	games = 0;
	balance = INITIAL_BALANCE;
}

void Player::placeBet(int position, int amount) {
	try
	{
		if (amount > balance)
            throw invalid_argument("Amount is greater than balance.");
		else if (position > 36 || position < -12)
            throw invalid_argument("Invalid position, must be between -12 and 36.");
		else
		{
            balance -= amount;
            for (Bet& bet : bets)
            {
                if (bet.getPosition() == position)
                {
                    amount += bet.getAmount();
                    bet.setAmount(amount);
                    return;
                }
            }
			Bet newBet(position, amount);
			bets.push_back(newBet);
		}
	}
    catch (const invalid_argument& e) {
        cout << endl;
        cerr << "Error: " << e.what() << endl;
    }
}

float Player::getWinrate()
{
    if (getGames() > 0)
        return ((getWins()) / getGames()) * 100;
    return 0;
}

void Player::displayBets(){
    cout << "\nACTIVE BETS:\n";
    for (Bet& bet : bets) {
        if (bet.getPosition() >= 0) {
            cout << "Bet on a single number - " << bet.getPosition() << ", amount: " << bet.getAmount() << " CHIPS\n";
        }
        else {
            switch (bet.getPosition()) {
            case -1:
                cout << "Bet on the 1st row, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -2:
                cout << "Bet on the 2nd row, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -3:
                cout << "Bet on the 3rd row, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -4:
                cout << "Bet on the 1st 12 numbers, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -5:
                cout << "Bet on the 2nd 12 numbers, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -6:
                cout << "Bet on the 3rd 12 numbers, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -7:
                cout << "Bet on the 1-18 range, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -8:
                cout << "Bet on the even numbers, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -9:
                cout << "Bet on the red numbers, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -10:
                cout << "Bet on the black numbers, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -11:
                cout << "Bet on the odd numbers, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            case -12:
                cout << "Bet on the 19-36 range, amount: " << bet.getAmount() << " CHIPS\n";
                break;
            }
        }
    }

    cout << endl << endl;
    
}
int Gambler::getBalance()
{
	return balance;
}

int Gambler::getWins()
{
	return wins;
}

int Gambler::getGames()
{
	return games;
}

string Person::getName()
{
	return name;
}

bool Player::emptyBets()
{
    return bets.empty();
}

void Player::WinCheck(int roll, string colour) {
    int winAmount = 0;
    int localWin = 0;

    for (const Bet& bet : bets) {
        if (bet.getPosition() == roll) {
            localWin += bet.getAmount() * 37;
        }
        else if (bet.getPosition() < 0) {
            switch (bet.getPosition()) {
            case -1:
                if (roll % 3 == 0)
                    localWin += bet.getAmount() * 3;
                break;
            case -2:
                if (roll % 3 == 2)
                    localWin += bet.getAmount() * 3;
                break;
            case -3:
                if (roll % 3 == 1)
                    localWin += bet.getAmount() * 3;
                break;
            case -4:
                if (roll > 0 && roll < 13)
                    localWin += bet.getAmount() * 3;
                break;
            case -5:
                if (roll > 12 && roll < 25)
                    localWin += bet.getAmount() * 3;
                break;
            case -6:
                if (roll > 24 && roll < 37)
                    localWin += bet.getAmount() * 3;
                break;
            case -7:
                if (roll < 19 && roll > 0)
                    localWin += bet.getAmount() * 2;
                break;
            case -8:
                if (roll % 2 == 0 && roll != 0)
                    localWin += bet.getAmount() * 2;
                break;
            case -9:
                if (colour == "RED")
                    localWin += bet.getAmount() * 2;
                break;
            case -10:
                if (colour == "BLACK")
                    localWin += bet.getAmount() * 2;
                break;
            case -11:
                if (roll % 2 == 1)
                    localWin += bet.getAmount() * 2;
                break;
            case -12:
                if (roll > 18 && roll < 37)
                    localWin += bet.getAmount() * 2;
                break;
            }
        }
        winAmount += localWin;
        games++;
        if (localWin > 0)
            wins++;
        localWin = 0; 
    }

    balance += winAmount;
    if (winAmount > 0)
        std::cout << "\n\nYou won " << winAmount << " chips!\n";
    else
        std::cout << "\n\nYou lost! ";
    std::cout << "Current balance: " << this->getBalance() << " chips\n";

    bets.clear();

}