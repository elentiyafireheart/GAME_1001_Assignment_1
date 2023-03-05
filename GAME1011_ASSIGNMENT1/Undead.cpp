#include "Undead.h"

void Undead::TauntPlayer()
{
	Enemy::TauntPlayer();
}

int Undead::GetTauntAmount() const
{
	return tauntAmount;
}

void Undead::SetTauntAmount(const int amount)
{
	tauntAmount = amount;
}

string Undead::GetSpeciesName()
{
	return speciesName;
}
