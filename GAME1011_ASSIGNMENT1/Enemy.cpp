#include "Enemy.h"

void Enemy::NormalAttack()
{
	GameObject::NormalAttack();
}

void Enemy::TauntPlayer()
{

}

void Enemy::SetEnemyAttack(int enemyattack)
{
	eAttack = enemyattack;
}

void Enemy::SetTauntPlayer(int enemytaunt)
{
	eTaunt = enemytaunt;
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

int Enemy::GetEnemyTaunt() const
{
	return eTaunt;
}
