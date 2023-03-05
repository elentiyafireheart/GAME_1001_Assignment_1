#include "Player.h"
using namespace std;

void Player::NormalAttack()
{
}

void Player::SpecialAttack()
{
}

void Player::SetName(const std::string name)
{
    this->name = name;
}

void Player::SetHealth(int health)
{
    this->health = health;
}

string Player::GetName()
{
    return name;
}

string Player::GetHealth()
{
    return health;
}
