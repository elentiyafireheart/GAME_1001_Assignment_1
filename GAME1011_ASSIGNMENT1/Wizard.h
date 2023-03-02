#pragma once
#include "Player.h"

using namespace std;

class Wizard : public Player
{
private:
    string SpecialAttackName = "holy Flame";
    int SpecialAttackAmount;

public:
    virtual void SpecialAttack() override;
    int GetSpecialAttackAmount() const
    {
        return SpecialAttackAmount;
    }
    void SetSpecialAttackAmount(const int amount)
    {
        SpecialAttackAmount = amount;
    }

};
