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
#include <cstdlib>

using namespace std;

int main()
{

	int playerChoice;
	int battleReady;
	int randomEnemy;
	string playerName;

	srand(time(NULL));

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

		cout << "\nHere is your current player information:" << endl;
		cout << "Class: Wizard" << endl;
		cout << "Name: " << p1->GetName() << endl;
		cout << "Health: " << p1->GetHealth() << endl;

		cout << "\nAre you ready to witness a battle? Yes (1) or No (2)" << endl;
		cin >> battleReady;

		if (battleReady == 1)
		{
			randomEnemy = rand() % 50 + 1;

			if (randomEnemy > 1 && randomEnemy < 50)
			{
				Orc* e1 = new Orc;
			
			}
			else if (randomEnemy > 51 && randomEnemy < 100)
			{
				Undead* e2 = new Undead;

			}
		}
		else if (battleReady == 2)
		{
			cout << "You ran from battle..." << endl;
		}

	}
	else if(playerChoice == 2)
	{
		Knight* p2 = new Knight;
		cout << "What would you like to name your character?" << endl;
		cin >> playerName;
		p2->SetName(playerName);
		p2->SetHealth(250);

		cout << "\nHere is your current player information:" << endl;
		cout << "Class: Knight" << endl;
		cout << "Name: " << p2->GetName() << endl;
		cout << "Health: " << p2->GetHealth() << endl;

		cout << "\nAre you ready to witness a battle? Yes (1) or No (2):" << endl;
		cin >> battleReady;

		if (battleReady ==1)
		{
			randomEnemy = rand() % 100 + 1;

			if (randomEnemy > 1 && randomEnemy < 50)
			{
				Orc* e1 = new Orc;

			}
			else if (randomEnemy > 51 && randomEnemy < 100)
			{
				Undead* e2 = new Undead;
			}
		}
		else if (battleReady == 2)
		{
			cout << "You ran from battle..." << endl;
		}
	}
}