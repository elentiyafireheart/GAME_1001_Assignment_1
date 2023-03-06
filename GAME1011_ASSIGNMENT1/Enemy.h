#pragma once
#include <string>
using namespace std;

#include "GameObject.h"
class Enemy :    public GameObject
{
private:

    int eHealth;
    int eAttack;

public:

    Enemy() : eHealth(100), eAttack(10){}
    virtual void TauntPlayer();
    void TakeDamage(int damage,string name);
    void SetEnemyAttack(int enemyattack);
    void SetTauntPlayer(int enemytaunt);
    void SetEnemyHealth(int enemyhealth);

	int GetEnemyAttack();
	int GetEnemyHealth() const;
   


};

