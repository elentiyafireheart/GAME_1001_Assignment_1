#pragma once
#include <string>
#include "Enemy.h"
using namespace std;

class Undead : public Enemy
{
private:
    string speciesName = "Undead";
    static const int NUM_TAUNTS = 3;
    std::string taunts[NUM_TAUNTS] = {
        "Beware, I live!",
        "Once someones dead you can't make them undead.",
        "bwahaha"
    };
    int tauntAmount;
public:
    virtual void TauntPlayer() override;
    int GetTauntAmount() const;
    void SetTauntAmount(const int amount);
    string GetSpeciesName();

};

