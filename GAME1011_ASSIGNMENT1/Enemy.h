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
    virtual void TauntPlayer() = 0;

    void SetEnemyAttack(int enemyattack)
    {
        eAttack = enemyattack;
    }
    void SetTauntPlayer(int enemytaunt)
    {
        eTaunt = enemytaunt;
    }
    void SetEnemyHealth(int enemyhealth)
    {
        eHealth = enemyhealth;
    }

    int GetEnemyAttack()
    {
        return eAttack;
    }
    int GetEnemyHealth() const
    {
        return eHealth;
    }
    int GetEnemyTaunt() const
    {
        return eTaunt;
    }

};

