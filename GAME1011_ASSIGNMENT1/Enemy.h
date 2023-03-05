#pragma once
#include "GameObject.h"
class Enemy :    public GameObject
{
private:

    int eHealth;
    int eTaunt;
    int eAttack;

public:

    virtual void NormalAttack() override;
    virtual void TauntPlayer();

    void SetEnemyAttack(int enemyattack);
    void SetTauntPlayer(int enemytaunt);
    void SetEnemyHealth(int enemyhealth);

	int GetEnemyAttack();
	int GetEnemyHealth() const;
	int GetEnemyTaunt() const;


};

