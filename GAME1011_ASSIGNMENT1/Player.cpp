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

void Player::GetName()
{
    return name;
}

void Player::GetHealth()
{
    return health;
}
