#pragma once
#include "Enemy.h"
using namespace std;
class Orc : public Enemy
{
private:
    string speciesName = "Orc";
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

