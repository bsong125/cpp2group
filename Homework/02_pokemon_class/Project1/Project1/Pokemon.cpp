/*
	Nguyen, Frank
	Song, Jung Hoon
	Diep, Vu

	February  8, 2020

	CS 250
	Assignment 02 - Pokemon Class
*/

#include "Pokemon.h"

#include <iostream>

using namespace std;

Pokemon::Pokemon()
{
	pokemonNumber = 0;
}

Pokemon::Pokemon(const string& newPokemonName, int newPokemonNumber,
	const string& newPokemonFirstType)
{
	pokemonName = newPokemonName;
	pokemonNumber = newPokemonNumber;
	pokemonFirstType = newPokemonFirstType;
}

Pokemon::Pokemon(const string& newPokemonName, int newPokemonNumber,
	const string& newPokemonFirstType, const string& newPokemonSecondType)
{
	pokemonName = newPokemonName;
	pokemonNumber = newPokemonNumber;
	pokemonFirstType = newPokemonFirstType;
	pokemonSecondType = newPokemonSecondType;
}
string Pokemon::getType1() const
{
	return pokemonFirstType; 
}
string Pokemon::getType2() const
{
	return pokemonSecondType;
}

bool Pokemon::commonType(const Pokemon& comparedType) const
{
	if ((pokemonFirstType == comparedType.getType1()) || 
		(pokemonFirstType == comparedType.getType2()))return true;
	else if ((pokemonSecondType == comparedType.getType1()) || 
		(pokemonFirstType == comparedType.getType2())) return true;
	return false;
}

void Pokemon::print() const
{
	cout << pokemonName << ": " << pokemonFirstType << " " << pokemonSecondType << endl;
}

Pokemon::~Pokemon()
{}