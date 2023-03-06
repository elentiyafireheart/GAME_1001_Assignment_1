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
				e1->SetEnemyHealth(100); // sets orc health to 100

				cout << "An Enemy " << e1->GetSpeciesName() << " enters the battle..." << endl;
				cout << "Health: " << e1->GetEnemyHealth() << endl;
				while (p1->GetHealth() > 0 && e1->GetEnemyHealth() > 0) {

					cout << "\nEnemy "<< e1->GetSpeciesName() <<" taunts you!" << endl;
					e1->TauntPlayer();
					cout << p1->GetName() << " performs normal attack!" << endl;
					cout << "Normal attack Dose: "<<p1->NormalAttack() <<" Damage!" << endl;
					e1->TakeDamage(p1->NormalAttack(),e1->GetSpeciesName());

					cout << "Enemy " << e1->GetSpeciesName() << " taunts you!" << endl;
					e1->TauntPlayer();
					cout << p1->GetName() << " performs special attack! " <<p1->GetSpecialAttackName()<< endl;
					cout << "Special attack Dose: " << p1->SpecialAttack() << " Damage!" << endl;
					e1->TakeDamage(p1->SpecialAttack(), e1->GetSpeciesName());

					cout << "Enemy performs normal attack!" << endl;
					cout << "Normal attack Dose: " << e1->NormalAttack() << " Damage!" << endl;
					p1->TakeDamage(e1->NormalAttack(),p1->GetName());

					cout << "Enemy performs normal attack!" << endl;
					cout << "Normal attack Dose: " << e1->NormalAttack() << " Damage!" << endl;
					p1->TakeDamage(e1->NormalAttack(), p1->GetName());

					cout << p1->GetName() << " performs special attack! " << p1->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p1->SpecialAttack() << " Damage!" << endl;
					e1->TakeDamage(p1->SpecialAttack(), e1->GetSpeciesName());

					cout << "Enemy " << e1->GetSpeciesName() << " taunts you!" << endl;
					e1->TauntPlayer();
					cout <<p1->GetName()<< " performs special attack! " << p1->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p1->SpecialAttack() << " Damage!" << endl;
					e1->TakeDamage(p1->SpecialAttack(), e1->GetSpeciesName());
				}

				if (p1->GetHealth() > 0) {
					cout << "\nEnemy "<<e1->GetSpeciesName()<<" died!" << endl;
					cout <<p1->GetName()<< " You win!" << endl;
				}
				else {
					cout << "\nYou died!" << endl;
					cout << "You lose!" << endl;
				}

			}
			else if (randomEnemy > 51 && randomEnemy < 100) // creates undead enemy
			{
				Undead* e2 = new Undead;
				e2->SetEnemyHealth(100); // sets undead health to 500

				cout << "An Enemy " << e2->GetSpeciesName() << " enters the battle..." << endl;
				cout << "Health: " << e2->GetEnemyHealth() << endl;
				while (p1->GetHealth() > 0 && e2->GetEnemyHealth() > 0) {

					cout << "\nEnemy " << e2->GetSpeciesName() << " taunts you!" << endl;
					e2->TauntPlayer();
					cout << p1->GetName() << " performs normal attack!" << endl;
					cout << "Normal attack Dose: " << p1->NormalAttack() << " Damage!" << endl;
					e2->TakeDamage(p1->NormalAttack(), e2->GetSpeciesName());

					cout << "Enemy " << e2->GetSpeciesName() << " taunts you!" << endl;
					e2->TauntPlayer();
					cout << p1->GetName() << " performs special attack! " << p1->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p1->SpecialAttack() << " Damage!" << endl;
					e2->TakeDamage(p1->SpecialAttack(), e2->GetSpeciesName());

					cout << "Enemy performs normal attack!" << endl;
					cout << "Normal attack Dose: " << e2->NormalAttack() << " Damage!" << endl;
					p1->TakeDamage(e2->NormalAttack(), p1->GetName());

					cout << "Enemy performs normal attack!" << endl;
					cout << "Normal attack Dose: " << e2->NormalAttack() << " Damage!" << endl;
					p1->TakeDamage(e2->NormalAttack(), p1->GetName());

					cout << p1->GetName() << " performs special attack! " << p1->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p1->SpecialAttack() << " Damage!" << endl;
					e2->TakeDamage(p1->SpecialAttack(), e2->GetSpeciesName());

					cout << "Enemy " << e2->GetSpeciesName() << " taunts you!" << endl;
					e2->TauntPlayer();
					cout << p1->GetName() << " performs special attack! " << p1->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p1->SpecialAttack() << " Damage!" << endl;
					e2->TakeDamage(p1->SpecialAttack(), e2->GetSpeciesName());
				}

				if (p1->GetHealth() > 0) {
					cout << "\nEnemy " << e2->GetSpeciesName() << " died!" << endl;
					cout << p1->GetName() << " You win!" << endl;
				}
				else {
					cout << "\nYou died!" << endl;
					cout << "You lose!" << endl;
				}
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
				while (p2->GetHealth() > 0 && e1->GetEnemyHealth() > 0) {

					cout << "\nEnemy " << e1->GetSpeciesName() << " taunts you!" << endl;
					e1->TauntPlayer();
					cout << p2->GetName() << " performs normal attack!" << endl;
					cout << "Normal attack Dose: " << p2->NormalAttack() << " Damage!" << endl;
					e1->TakeDamage(p2->NormalAttack(), e1->GetSpeciesName());

					cout << "Enemy " << e1->GetSpeciesName() << " taunts you!" << endl;
					e1->TauntPlayer();
					cout << p2->GetName() << " performs special attack! " << p2->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p2->SpecialAttack() << " Damage!" << endl;
					e1->TakeDamage(p2->SpecialAttack(), e1->GetSpeciesName());

					cout << "Enemy performs normal attack!" << endl;
					cout << "Normal attack Dose: " << e1->NormalAttack() << " Damage!" << endl;
					p2->TakeDamage(e1->NormalAttack(), p2->GetName());

					cout << "Enemy performs normal attack!" << endl;
					cout << "Normal attack Dose: " << e1->NormalAttack() << " Damage!" << endl;
					p2->TakeDamage(e1->NormalAttack(), p2->GetName());

					cout << p2->GetName() << " performs special attack! " << p2->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p2->SpecialAttack() << " Damage!" << endl;
					e1->TakeDamage(p2->SpecialAttack(), e1->GetSpeciesName());

					cout << "Enemy " << e1->GetSpeciesName() << " taunts you!" << endl;
					e1->TauntPlayer();
					cout << p2->GetName() << " performs special attack! " << p2->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p2->SpecialAttack() << " Damage!" << endl;
					e1->TakeDamage(p2->SpecialAttack(), e1->GetSpeciesName());
				}

				if (p2->GetHealth() > 0) {
					cout << "\nEnemy " << e1->GetSpeciesName() << " died!" << endl;
					cout << p2->GetName() << " You win!" << endl;
				}
				else {
					cout << "\nYou died!" << endl;
					cout << "You lose!" << endl;
				}
			}
			else if (randomEnemy > 51 && randomEnemy < 100) // creates undead enemy
			{
				Undead* e2 = new Undead;
				e2->SetEnemyHealth(500); // sets undead health to 500

				cout << "An Enemy " << e2->GetSpeciesName() << " enters the battle..." << endl;
				cout << "Health: " << e2->GetEnemyHealth() << endl;
				while (p2->GetHealth() > 0 && e2->GetEnemyHealth() > 0) {

					cout << "\nEnemy " << e2->GetSpeciesName() << " taunts you!" << endl;
					e2->TauntPlayer();
					cout << p2->GetName() << " performs normal attack!" << endl;
					cout << "Normal attack Dose: " << p2->NormalAttack() << " Damage!" << endl;
					e2->TakeDamage(p2->NormalAttack(), e2->GetSpeciesName());

					cout << "Enemy " << e2->GetSpeciesName() << " taunts you!" << endl;
					e2->TauntPlayer();
					cout << p2->GetName() << " performs special attack! " << p2->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p2->SpecialAttack() << " Damage!" << endl;
					e2->TakeDamage(p2->SpecialAttack(), e2->GetSpeciesName());

					cout << "Enemy performs normal attack!" << endl;
					cout << "Normal attack Dose: " << e2->NormalAttack() << " Damage!" << endl;
					p2->TakeDamage(e2->NormalAttack(), p2->GetName());

					cout << "Enemy performs normal attack!" << endl;
					cout << "Normal attack Dose: " << e2->NormalAttack() << " Damage!" << endl;
					p2->TakeDamage(e2->NormalAttack(), p2->GetName());

					cout << p2->GetName() << " performs special attack! " << p2->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p2->SpecialAttack() << " Damage!" << endl;
					e2->TakeDamage(p2->SpecialAttack(), e2->GetSpeciesName());

					cout << "Enemy " << e2->GetSpeciesName() << " taunts you!" << endl;
					e2->TauntPlayer();
					cout << p2->GetName() << " performs special attack! " << p2->GetSpecialAttackName() << endl;
					cout << "Special attack Dose: " << p2->SpecialAttack() << " Damage!" << endl;
					e2->TakeDamage(p2->SpecialAttack(), e2->GetSpeciesName());
				}

				if (p2->GetHealth() > 0) {
					cout << "\nEnemy " << e2->GetSpeciesName() << " died!" << endl;
					cout << p2->GetName() << " You win!" << endl;
				}
				else {
					cout << "\nYou died!" << endl;
					cout << "You lose!" << endl;
				}
			}
		}
		else if (battleReady == 2)
		{
			cout << "You ran from battle..." << endl;
		}
	}

}