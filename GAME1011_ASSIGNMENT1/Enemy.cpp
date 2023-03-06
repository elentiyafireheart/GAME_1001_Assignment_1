#include "Enemy.h"

#include <iostream>


void Enemy::TauntPlayer()
{

}

void Enemy::TakeDamage(int damage,string name)
{
	
	if (eHealth < 0)
	{
		eHealth = 0;
		std::cout << std::endl <<name <<" health = " << eHealth<< std::endl;
	}
	else {
		std::cout << std::endl <<name <<" health = " << eHealth - damage << std::endl;
	}
	eHealth -= damage;
}

void Enemy::SetEnemyAttack(int enemyattack)
{
	eAttack = enemyattack;
}


void Enemy::SetEnemyHealth(int enemyhealth)
{
	eHealth = enemyhealth;
}

int Enemy::GetEnemyAttack()
{
	return eAttack;
}

int Enemy::GetEnemyHealth() const
{
	return eHealth;
}


