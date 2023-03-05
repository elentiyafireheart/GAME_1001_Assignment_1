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
    int GetTauntAmount() const;
    void SetTauntAmount(const int amount);
    string GetSpeciesName();

};

