#include "Knight.h"

void Knight::SpecialAttack()
{
	Player::SpecialAttack();
}

int Knight::GetSpecialAttackAmount() const
{
	return SpecialAttackAmount;
}

void Knight::SetSpecialAttackAmount(const int amount)
{
	SpecialAttackAmount = amount;
}
