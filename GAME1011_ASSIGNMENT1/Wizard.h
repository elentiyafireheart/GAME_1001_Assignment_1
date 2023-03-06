#pragma once
#include "Player.h"

using namespace std;

class Wizard : public Player
{
private:
    string SpecialAttackName = "holy Flame";
    int SpecialAttackAmount;

public:
    string GetSpecialAttackName();
    virtual int SpecialAttack() override;
    int GetSpecialAttackAmount() const;
    void SetSpecialAttackAmount(const int amount);

};
