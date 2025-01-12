#include <iostream>
#include "display.hpp"

using namespace std;

void tableDisplay()
{
	cout << " +---+---+----+----+----+----+----+----+----+----+----+----+----+-------+\n";
	cout << " |   |   |    |    |    |    |    |    |    |    |    |    |    |       |\n";
	cout << " |   | 3 | 6  | 9  | 12 | 15 | 18 | 21 | 24 | 27 | 30 | 33 | 36 | row 1 |\n";
	cout << " |   |___|____|____|____|____|____|____|____|____|____|____|____|_______|\n";
	cout << " |   |   |    |    |    |    |    |    |    |    |    |    |    |       |\n";
	cout << " | 0 | 2 | 5  | 8  | 11 | 14 | 17 | 20 | 23 | 26 | 29 | 32 | 35 | row 2 |\n";
	cout << " |   |___|____|____|____|____|____|____|____|____|____|____|____|_______|\n";
	cout << " |   |   |    |    |    |    |    |    |    |    |    |    |    |       |\n";
	cout << " |   | 1 | 4  | 7  | 10 | 13 | 16 | 19 | 22 | 25 | 28 | 31 | 34 | row 3 |\n";
	cout << " |___|___|____|____|____|____|____|____|____|____|____|____|____|_______|\n";
	cout << "     |                  |                   |                   |\n";
	cout << "     |      1st 12      |       2nd 12      |       3rd 12      |\n";
	cout << "     |__________________|___________________|___________________|\n";
	cout << "     |        |         |         |         |         |         |\n";
	cout << "     |  1-18  |   even  |   red   |  black  |   odd   |  19-36  |\n";
	cout << "     +--------+---------+---------+---------+---------+---------+\n";
}

void numberDisplayGen(int n, int m)
{
	string number[10][11];
	number[0][0] = " .----------------. ";
	number[0][1] = "| .--------------. |";
	number[0][2] = "| |     ____     | |";
	number[0][3] = "| |   .'    '.   | |";
	number[0][4] = "| |  |  .--.  |  | |";
	number[0][5] = "| |  | |    | |  | |";
	number[0][6] = "| |  |  `--'  |  | |";
	number[0][7] = "| |   '.____.'   | |";
	number[0][8] = "| |              | |";
	number[0][9] = "| '--------------' |";
	number[0][10] = " '----------------' ";

	number[1][0] = " .----------------. ";
	number[1][1] = "| .--------------. |";
	number[1][2] = "| |     __       | |";
	number[1][3] = "| |    /  |      | |";
	number[1][4] = "| |    `| |      | |";
	number[1][5] = "| |     | |      | |";
	number[1][6] = "| |    _| |_     | |";
	number[1][7] = "| |   |_____|    | |";
	number[1][8] = "| |              | |";
	number[1][9] = "| '--------------' |";
	number[1][10] = " '----------------' ";

	number[2][0] = " .----------------. ";
	number[2][1] = "| .--------------. |";
	number[2][2] = "| |    _____     | |";
	number[2][3] = "| |   / ___ `.   | |";
	number[2][4] = "| |  |_/___) |   | |";
	number[2][5] = "| |   .'____.'   | |";
	number[2][6] = "| |  / /____     | |";
	number[2][7] = "| |  |_______|   | |";
	number[2][8] = "| |              | |";
	number[2][9] = "| '--------------' |";
	number[2][10] = " '----------------' ";

	number[3][0] = " .----------------. ";
	number[3][1] = "| .--------------. |";
	number[3][2] = "| |    ______    | |";
	number[3][3] = "| |   / ____ `.  | |";
	number[3][4] = "| |   `'  __) |  | |";
	number[3][5] = "| |   _  |__ '.  | |";
	number[3][6] = "| |  | \\____) |  | |";
	number[3][7] = "| |   \\______.'  | |";
	number[3][8] = "| |              | |";
	number[3][9] = "| '--------------' |";
	number[3][10] = " '----------------' ";

	number[4][0] = " .----------------. ";
	number[4][1] = "| .--------------. |";
	number[4][2] = "| |   _    _     | |";
	number[4][3] = "| |  | |  | |    | |";
	number[4][4] = "| |  | |__| |_   | |";
	number[4][5] = "| |  |____   _|  | |";
	number[4][6] = "| |      _| |_   | |";
	number[4][7] = "| |     |_____|  | |";
	number[4][8] = "| |              | |";
	number[4][9] = "| '--------------' |";
	number[4][10] = " '----------------' ";

	number[5][0] = " .----------------. ";
	number[5][1] = "| .--------------. |";
	number[5][2] = "| |   _______    | |";
	number[5][3] = "| |  |  _____|   | |";
	number[5][4] = "| |  | |____     | |";
	number[5][5] = "| |  '_.____''.  | |";
	number[5][6] = "| |  | \\____) |  | |";
	number[5][7] = "| |   \\______.'  | |";
	number[5][8] = "| |              | |";
	number[5][9] = "| '--------------' |";
	number[5][10] = " '----------------' ";

	number[6][0] = " .----------------. ";
	number[6][1] = "| .--------------. |";
	number[6][2] = "| |    ______    | |";
	number[6][3] = "| |  .' ____ \\   | |";
	number[6][4] = "| |  | |____\\_|  | |";
	number[6][5] = "| |  | '____`'.  | |";
	number[6][6] = "| |  | (____) |  | |";
	number[6][7] = "| |  '.______.'  | |";
	number[6][8] = "| |              | |";
	number[6][9] = "| '--------------' |";
	number[6][10] = " '----------------' ";

	number[7][0] = " .----------------. ";
	number[7][1] = "| .--------------. |";
	number[7][2] = "| |   _______    | |";
	number[7][3] = "| |  |  ___  |   | |";
	number[7][4] = "| |  |_/  / /    | |";
	number[7][5] = "| |      / /     | |";
	number[7][6] = "| |     / /      | |";
	number[7][7] = "| |    /_/       | |";
	number[7][8] = "| |              | |";
	number[7][9] = "| '--------------' |";
	number[7][10] = " '----------------' ";

	number[8][0] = " .----------------. ";
	number[8][1] = "| .--------------. |";
	number[8][2] = "| |     ____     | |";
	number[8][3] = "| |   .' __ '.   | |";
	number[8][4] = "| |   | (__) |   | |";
	number[8][5] = "| |   .`____'.   | |";
	number[8][6] = "| |  | (____) |  | |";
	number[8][7] = "| |  `.______.'  | |";
	number[8][8] = "| |              | |";
	number[8][9] = "| '--------------' |";
	number[8][10] = " '----------------' ";

	number[9][0] = " .----------------. ";
	number[9][1] = "| .--------------. |";
	number[9][2] = "| |    ______    | |";
	number[9][3] = "| |  .' ____ '.  | |";
	number[9][4] = "| |  | (____) |  | |";
	number[9][5] = "| |  '_.____. |  | |";
	number[9][6] = "| |  | \\____| |  | |";
	number[9][7] = "| |   \\______,'  | |";
	number[9][8] = "| |              | |";
	number[9][9] = "| '--------------' |";
	number[9][10] = " '----------------' ";

	
	for (int i = 0; i <= 10; i++)
		cout << number[n][i] << " " << number[m][i] << endl;
}

void startDisplay()
{
	cout << "\t _____  _____   _________      _____           ______        ____      ____    ____   _________ \n";
	cout << "\t|_   _||_   _| |_   ___  |    |_   _|        .' ___  |     .'    `.   |_   \\  /   _| |_   ___  |\n";
	cout << "\t  | | /\\ | |     | |_  \\_|      | |         / .'   \\_|    /  .--.  \\    |   \\/   |     | |_  \\_|\n";
	cout << "\t  | |/  \\| |     |  _|  _       | |   _     | |           | |    | |    | |\\  /| |     |  _|  _ \n";
	cout << "\t  |   /\\   |    _| |___/ |     _| |__/ |    \\ `.___.'\\    \\  `--'  /   _| |_\\/_| |_   _| |___/ |\n";
	cout << "\t  |__/  \\__|   |_________|    |________|     `._____.'     `.____.'   |_____||_____| |_________|\n";
	cout << "\t\t\t\t\t  _________        ____    \n";
	cout << "\t\t\t\t\t |  _   _  |     .'    `.  \n";
	cout << "\t\t\t\t\t |_/ | | \\_|    /  .--.  \\ \n";
	cout << "\t\t\t\t\t     | |        | |    | | \n";
	cout << "\t\t\t\t\t    _| |_       \\  `--'  / \n";
	cout << "\t\t\t\t\t   |_____|       `.____.' \n";
	cout << " _______          ____      _____  _____    _____        _________     _________     _________     _________ \n";
	cout << "|_   __ \\       .'    `.   |_   _||_   _|  |_   _|      |_   ___  |   |  _   _  |   |  _   _  |   |_   ___  |\n";
	cout << "  | |__) |     /  .--.  \\    | |    | |      | |          | |_  \\_|   |_/ | | \\_|   |_/ | | \\_|     | |_  \\_|\n";
	cout << "  |  __ /      | |    | |    | '    ' |      | |   _      |  _|  _        | |           | |         |  _|  _ \n";
	cout << " _| |  \\ \\_    \\  `--'  /     \\ `--' /      _| |__/ |    _| |___/ |      _| |_         _| |_       _| |___/ |\n";
	cout << "|____| |___|    `.____.'       `.__.'      |________|   |_________|     |_____|       |_____|     |_________|\n";
}



void gameOverDisplay()
{
	cout << "\t\t\t\t\t\n\n\n\n\n\n";

	cout << "    ______          __       ____    ____   _________          ____     ____   ____   _________    _______     \n";
	cout << "  .' ___  |        /  \\     |_   \\  /   _| |_   ___  |       .'    `.  |_  _| |_  _| |_   ___  |  |_   __ \\ \n";
	cout << " / .'   \\_|       / /\\ \\      |   \\/   |     | |_  \\_|      /  .--.  \\   \\ \\   / /     | |_  \\_|    | |__) |   \n";
	cout << " | |    ____     / ____ \\     | |\\  /| |     |  _|  _       | |    | |    \\ \\ / /      |  _|  _     |  __ /    \n";
	cout << " \\ `.___]  _|  _/ /    \\ \\_  _| |_\\/_| |_   _| |___/ |      \\  `--'  /     \\ ' /      _| |___/ |   _| |  \\ \\_  \n";
	cout << "  `._____.'   |____|  |____||_____||_____| |_________|       `.____.'       \\_/      |_________|  |____| |___| \n";
}

void availableBetsDisplay()
{
	cout << endl << endl;

	cout << "Choose a field to bet on..." << endl;
	cout << "Betting on exact number: [number]." << endl;
	cout << "Betting on a combo field: [negative number]." << endl;

	cout << "\t -1: Bet on the 1st row of numbers.\n";
	cout << "\t -2: Bet on the 2nd row of numbers.\n";
	cout << "\t -3: Bet on the 3rd row of numbers.\n";

	cout << "\t -4: Bet on the 1st set of 12 numbers.\n";
	cout << "\t -5: Bet on the 2nd set of 12 numbers.\n";
	cout << "\t -6: Bet on the 3rd set of 12 numbers.\n";

	cout << "\t -7: Bet on the numbers in range of 1 to 18.\n";
	cout << "\t -8: Bet on the even numbers.\n";
	cout << "\t -9: Bet on the red numbers.\n";
	cout << "\t -10: Bet on the black numbers.\n";
	cout << "\t -11: Bet on the odd numbers.\n";
	cout << "\t -12: Bet on the numbers in range of 19 to 36.\n\n";

	
}