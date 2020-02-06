/*
	Nguyen, Frank
	Song, Jung Hoon
	Diep, Vu

	February  8, 2020

	CS 250
	Assignment 02 - Pokemon Class
*/
#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon
{
public:
	Pokemon();
	Pokemon(const std::string& pokemonName, int pokemonNumber, 
		const std::string& pokemonFirstType);
	Pokemon(const std::string& pokemonName, int pokemonNumber, 
		const std::string& pokemonFirstType, const std::string& pokemonSecondType);
	std::string getType1() const;
	std::string getType2() const;
	
	bool commonType(const Pokemon& comparedType) const;
	void print() const;
	
	~Pokemon();

private:
	std::string pokemonName;
	int pokemonNumber;
	std::string pokemonFirstType;
	std::string pokemonSecondType;
};

#endif // !POKEMON_H
