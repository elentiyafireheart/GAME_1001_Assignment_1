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
	int battleReady;
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
		p1->SetHealth(200);

		cout << "\nHere is your current player information:";
		cout << "Class: Wizard" << endl;
		cout << "Name: " << p1->GetName() << endl;
		cout << "Health: " << p1->GetHealth() << endl;

		cout << "\nAre you ready to witness a battle? Yes (1) or No (2)";
		cin >> battleReady;

		if (battleReady == 1)
		{

		}
		else if (battleReady == 2)
		{

		}

	}
	else if(playerChoice == 2)
	{
		Knight* p2 = new Knight;
		cout << "knight";
		cout << "What would you like to name your character?" << endl;
		cin >> playerName;
		p2->SetName(playerName);
		p2->SetHealth(250);

		cout << "\nHere is your current player information:";
		cout << "Class: Wizard" << endl;
		cout << "Name: " << p2->GetName() << endl;
		cout << "Health: " << p2->GetHealth() << endl;

		cout << "\nAre you ready to witness a battle? Yes (1) or No (2)";
		cin >> battleReady;

		if (battleReady ==1)
		{
			
		}
		else if (battleReady == 2)
		{
			
		}
	}
}