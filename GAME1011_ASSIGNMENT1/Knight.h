#pragma once
#include "Player.h"
class Knight :    public Player
{
private:
    string SpecialAttackName = "GOD Slash";
    int SpecialAttackAmount;

public:
    virtual void SpecialAttack() override;
    int GetSpecialAttackAmount() const;
    void SetSpecialAttackAmount(const int amount);

};

