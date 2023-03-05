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

	// 2 statements. One will create the wizard, one creates knight.
	//two if statements inside of each player choice. one is for undead, one is for orc


	if (playerChoice == 1) // creates wizard
	{
		Wizard* p1 = new Wizard;
		cout << "What would you like to name your character?" << endl;
		cin >> playerName;
		p1->SetName(playerName);
		p1->SetHealth(200); // sets wizard health to 200

		cout << "\nHere is your current player information:" << endl;
		cout << "Class: Wizard" << endl;
		cout << "Name: " << p1->GetName() << endl;
		cout << "Health: " << p1->GetHealth() << endl;

		cout << "\nAre you ready to witness a battle? Yes (1) or No (2)" << endl;
		cin >> battleReady;

		if (battleReady == 1)
		{
			randomEnemy = rand() % 100 + 1; //randomly picks enemy

			if (randomEnemy > 1 && randomEnemy < 50) // Creates orc enemy
			{
				Orc* e1 = new Orc;
				e1->SetEnemyHealth(600); // sets orc health to 600

				cout << "An Enemy " << e1->GetSpeciesName() << " enters the battle..." << endl;
				cout << "Health: " << e1->GetEnemyHealth() << endl;

			}
			else if (randomEnemy > 51 && randomEnemy < 100) // creates undead enemy
			{
				Undead* e2 = new Undead;
				e2->SetEnemyHealth(500); // sets undead health to 500

				cout << "An Enemy " << e2->GetSpeciesName() << " enters the battle..." << endl;
				cout << "Health: " << e2->GetEnemyHealth() << endl;
			}
		}
		else if (battleReady == 2)
		{
			cout << "You ran from battle..." << endl;
		}

	}
	else if(playerChoice == 2) //creates knight
	{
		Knight* p2 = new Knight;
		cout << "What would you like to name your character?" << endl;
		cin >> playerName;
		p2->SetName(playerName);
		p2->SetHealth(250); // sets knights health to 250

		cout << "\nHere is your current player information:" << endl;
		cout << "Class: Knight" << endl;
		cout << "Name: " << p2->GetName() << endl;
		cout << "Health: " << p2->GetHealth() << endl;

		cout << "\nAre you ready to witness a battle? Yes (1) or No (2):" << endl;
		cin >> battleReady;

		if (battleReady ==1)
		{
			randomEnemy = rand() % 100 + 1; // randomly picks enemy

			if (randomEnemy > 1 && randomEnemy < 50) // creates orc enemy
			{
				Orc* e1 = new Orc;
				e1->SetEnemyHealth(600); //sets orc health to 600

				cout << "An Enemy " << e1->GetSpeciesName() << " enters the battle..." << endl;
				cout << "Health: " << e1->GetEnemyHealth() << endl;
			}
			else if (randomEnemy > 51 && randomEnemy < 100) // creates undead enemy
			{
				Undead* e2 = new Undead;
				e2->SetEnemyHealth(500); // sets undead health to 500

				cout << "An Enemy " << e2->GetSpeciesName() << " enters the battle..." << endl;
				cout << "Health: " << e2->GetEnemyHealth() << endl;
			}
		}
		else if (battleReady == 2)
		{
			cout << "You ran from battle..." << endl;
		}
	}
}