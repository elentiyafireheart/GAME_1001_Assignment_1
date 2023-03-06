#include "Orc.h"

#include <iostream>
#include <ostream>

void Orc::TauntPlayer()
{
	const int index = rand() % NUM_TAUNTS;
	std::cout << taunts[index] << std::endl;
}

void Orc::SetTauntAmount(const int amount)
{
	tauntAmount = amount;
}

string Orc::GetSpeciesName()
{
	return speciesName;
}

int Orc::GetTauntAmount() const
{
	return tauntAmount;
}

