#pragma once
#include <string>
#include "Enemy.h"
using namespace std;

class Undead : public Enemy
{
private:
    string speciesName = "Undead";
    int tauntAmount;
public:
    virtual void TauntPlayer() override;
    int GetTauntAmount() const
    {
        return tauntAmount;
    }
    void SetTauntAmount(const int amount)
    {
        tauntAmount = amount;
    }

};

