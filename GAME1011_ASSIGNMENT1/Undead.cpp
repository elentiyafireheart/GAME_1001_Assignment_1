#include "Undead.h"

#include <iostream>
#include <ostream>

void Undead::TauntPlayer()
{
	int index = rand() % NUM_TAUNTS;
	std::cout << taunts[index] << std::endl;
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
