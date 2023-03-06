#pragma once
#include <string>
#include "Enemy.h"
using namespace std;

class Orc : public Enemy
{
private:
    string speciesName = "Orc";
    static const int NUM_TAUNTS = 3;
    std::string taunts[NUM_TAUNTS] = {
        "You weak, pathetic fool.",
        "I salute my fallen enemy!",
        "Go home and be a family man!"
    };
    int tauntAmount;

public:
   
    virtual void TauntPlayer() override;
    int GetTauntAmount() const;
    void SetTauntAmount(const int amount);
    string GetSpeciesName();
};

