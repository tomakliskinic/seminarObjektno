#include <stdio.h>
#include <string>
#include <conio.h>
#include "game.hpp"
#include "display.hpp"
#include "roll.hpp"
#include "player.hpp"

using namespace std;

void rouletteGame::play()
{
	system("cls");
	startDisplay();
	string playerName;
	std::cout << "\n\n\t\t\t\t\tPLAYER NAME:\t\t";
	getline(cin,playerName);
	Player player(playerName);
	system("pause");
	system("cls");
	tableDisplay();
	playRoulette(player);
}

void rouletteGame::gameOver()
{
	system("pause");
	system("CLS");
	gameOverDisplay();
	system("pause");
	exit(0);
}

rouletteGame::rouletteGame()
{
	play();
}

void rouletteGame::victory(Player player)
{
    system("CLS");
    if (player.getBalance()>INITIAL_BALANCE)
        cout << "\n\n\tCongratulations " << player.getName() << ", you finished the game with a winrate of " << player.getWinrate() << "% and total balance of " << player.getBalance() << " chips!\n\n" << endl;
    else
        cout << "\n\n\tBetter luck next time " << player.getName() << ", you finished the game with a winrate of " << player.getWinrate() << "% and total balance of " << player.getBalance() << " chips.\n\n" << endl;
    system("pause");
    exit(0);
}

void rouletteGame::playRoulette(Player player)
{
    int position;
    int amount = 100;
    char input = '0';
    bool picked = false;
    char another = '0';
    char newgame = '0';
    char quitOption = '0';

    do {
        do {
            picked = false;
            if (amount > player.getBalance()) {
                if (player.getBalance() < 10)
                    break;

                if (player.getBalance() < 100)
                    amount = 10;

                else 
                    amount = 100;
            }
            do {
                system("CLS");

                tableDisplay();
                availableBetsDisplay();

                std::cout << "Balance: " << player.getBalance() << " CHIPS" << endl;
                std::cout << "Winrate: " << player.getWinrate() << "%" << endl;

                std::cout << "Bet code [-12 - 36]: ";

                if (!picked) {
                    cin >> position;
                    picked = true;
                }
                else {
                    std::cout << position;
                }

                std::cout << endl << endl;

                std::cout << "\nPress + or * to increase bet amount\nPress - or / to decrease bet amount\nPress a to all in\n";
                std::cout << "Bet amount: " << amount;
                input = _getch();
                if (input == '+') {
                    if (amount + 10 > player.getBalance())
                        continue;
                    amount += 10;
                }
                else if (input == '*') {
                    if (amount + 100 > player.getBalance())
                        continue;
                    amount += 100;
                }
                else if (input == '-') {
                    if (amount - 10 <= 0)
                        continue;
                    amount -= 10;
                }
                else if (input == '/') {
                    if (amount - 100 <= 0)
                        continue;
                    amount -= 100;
                }
                else if (tolower(input) == 'a') {
                    if (player.getBalance() < 10)
                        continue;
                    amount = player.getBalance();
                }

            } while (input != 13);

            player.placeBet(position, amount);
            player.displayBets();
            std::cout << "Balance: " << player.getBalance() << " CHIPS" << endl;

            if (player.getBalance() >= 10) {
                do {
                    std::cout << "\nPlace another bet? [Y/N]: ";
                    another = _getch();
                } while (tolower(another) != 'y' && tolower(another) != 'n' && player.getBalance() >= 10);
            }
            else {
                system("pause");
            }
        } while (tolower(another) == 'y');

        if (player.emptyBets()) {
            std::cout << "\nNo bets placed. \nWould you like to quit the game? [Y/N]: ";
            do
                quitOption = _getch(); 
            while (tolower(quitOption) != 'y' && tolower(quitOption) != 'n');
            if (tolower(quitOption) == 'y')
                victory(player);
            else {
                newgame = 'y';
                continue;
            }
        }

        Roll roll;
        int number = roll.getNumber();
        string colour = roll.getColour();
        player.displayBets();
        std::cout << endl << endl;
        player.WinCheck(number, colour);

        if (player.getBalance() >= 10) {
            do {
                std::cout << "\nPlay again? [Y/N]: ";
                newgame = _getch();
            } while (tolower(newgame) != 'y' && tolower(newgame) != 'n');
        }
        else {
            gameOver();
        }
    } while (tolower(newgame) == 'y');
    victory(player);
}