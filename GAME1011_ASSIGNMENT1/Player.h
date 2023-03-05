#pragma once
#include <string>

#include "GameObject.h"
using namespace std;

class Player : public GameObject
{
private:
	string name;
    int health;
public:
    virtual void NormalAttack() override;
    virtual void SpecialAttack();
    void SetName(const std::string name);
    void SetHealth(int health);
    string GetName();
    int GetHealth();
};