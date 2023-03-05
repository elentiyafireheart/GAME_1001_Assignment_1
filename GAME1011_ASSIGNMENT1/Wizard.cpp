#include "Wizard.h"

void Wizard::SpecialAttack()
{
	Player::SpecialAttack();
}

int Wizard::GetSpecialAttackAmount() const
{
	return SpecialAttackAmount;
}

void Wizard::SetSpecialAttackAmount(const int amount)
{
	SpecialAttackAmount = amount;
}
