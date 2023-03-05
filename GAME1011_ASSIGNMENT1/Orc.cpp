#include "Orc.h"

void Orc::TauntPlayer()
{
	Enemy::TauntPlayer();
}

void Orc::SetTauntAmount(const int amount)
{
	tauntAmount = amount;
}

int Orc::GetTauntAmount() const
{
	return tauntAmount;
}

