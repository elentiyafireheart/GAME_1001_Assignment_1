#include "Wizard.h"

string Wizard::GetSpecialAttackName()
{
	return SpecialAttackName;
}

int Wizard::SpecialAttack()
{
	return 30;
}

int Wizard::GetSpecialAttackAmount() const
{
	return SpecialAttackAmount;
}

void Wizard::SetSpecialAttackAmount(const int amount)
{
	SpecialAttackAmount = amount;
}
