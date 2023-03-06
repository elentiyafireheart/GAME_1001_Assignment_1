#include "Player.h"

#include <iostream>
using namespace std;

void Player::TakeDamage(int damage,string name)
{
	if (health < 0)
	{
		health = 0;
		std::cout << std::endl <<name<< " health = " << health << std::endl;
	}
	else {
		std::cout << std::endl <<name<< " health = " << health - damage << std::endl;
	}
	health -= damage;
}

int Player::NormalAttack()
{
	return 10;
}

int Player::SpecialAttack()
{
    return GameObject::NormalAttack();

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

int Player::GetHealth()
{
    return health;
}
