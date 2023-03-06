#pragma once
#include "Player.h"
class Knight :    public Player
{
private:
    string SpecialAttackName = "GOD Slash";
    int SpecialAttackAmount;

public:
    string GetSpecialAttackName();
    virtual int SpecialAttack() override;
    int GetSpecialAttackAmount() const;
    void SetSpecialAttackAmount(const int amount);

};

