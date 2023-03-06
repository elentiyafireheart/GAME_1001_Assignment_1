#pragma once
#include <string>

#include "GameObject.h"
using namespace std;

class Player : public GameObject
{
private:
	string name;
    int health = 200;
public:
    void TakeDamage(int damage,string name);
    virtual int NormalAttack() override;
    virtual int SpecialAttack();
    void SetName(const std::string name);
    void SetHealth(int health);
    string GetName();
    int GetHealth();
};