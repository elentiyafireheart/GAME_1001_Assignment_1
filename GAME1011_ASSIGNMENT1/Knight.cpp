#include "Knight.h"

string Knight::GetSpecialAttackName()
{
	return SpecialAttackName;
}

int Knight::SpecialAttack()
{
 return 30;
}

int Knight::GetSpecialAttackAmount() const
{
	return SpecialAttackAmount;
}

void Knight::SetSpecialAttackAmount(const int amount)
{
	SpecialAttackAmount = amount;
}
