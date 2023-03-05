#pragma once
#include <string>
#include "Enemy.h"
using namespace std;

class Orc : public Enemy
{
private:
    string speciesName = "Orc";
    int tauntAmount;

public:
    virtual void TauntPlayer() override;
    int GetTauntAmount() const;
    void SetTauntAmount(const int amount);
    string GetSpeciesName();
};

