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
	pokemonName = "Not determined yet";
	pokemonNumber = 0;
	pokemonFirstType = "Not determined yet";
	pokemonSecondType = "Not determined yet";
}

Pokemon::Pokemon(const string& pokemonName, int pokemonNumber,
	const std::string& pokemonFirstType)
{

}

Pokemon::Pokemon(const string& pokemonName, int pokemonNumber,
	const std::string& pokemonFirstType, const std::string& pokemonSecondType)
{

}
string Pokemon::getType1()
{

}
string Pokemon::getType2()
{

}

bool Pokemon::commonType(Pokemon& comparedType) const
{

}
void Pokemon::print()
{

}

~Pokemon();