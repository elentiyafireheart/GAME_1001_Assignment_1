#include <iomanip>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "GameObject.h"
#include "Knight.h"
#include "Orc.h"
#include "Undead.h"
#include "Wizard.h"

#include <string>

using namespace std;

int main()
{

	int playerChoice;
	string playerName;

	cout << "         |---------- Welcome to the Simulator ----------|" << endl;
	cout << "To continue your quest, please select either Wizard (1) or Knight (2)." << endl;
	cin >> playerChoice;

	if (playerChoice == 1)
	{
		Wizard* p1 = new Wizard;
		cout << "What would you like to name your character?" << endl;
		cin >> playerName;
		p1->SetName(playerName);
	}
	else if(playerChoice == 2)
	{
		Knight* p2 = new Knight;
		cout << "knight";
		cout << "What would you like to name your character?" << endl;
		cin >> playerName;
		p2->SetName(playerName);
	}
}