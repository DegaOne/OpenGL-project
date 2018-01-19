#pragma once

#include "stdafx.h"
#include "myAttributes.h"
#include "Weapon.h"
#include <stack>
#include <iostream>
using namespace std;
#include <string>


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////PLAYER CLASS///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Player {
private:
	//Player class and its attributes
	string name;
	int x;//Get //Set //Increase
	int y;//Get //Set //Increase
	int currentXp;//Get //Set
	int xpToNext;//Get //Set
	int xpLevel;//Get //Set //Increase
	int currency;//Get //Set //Increase
	bool onAttackStance;//Get //Set
public:
	stack<Weapon> Weapons;
	static float icon[9];
	static float colourArray[12];
	Attributes attributes;//Attributes class has its own mutators
	Player();
	//Player functions

	//Getters
	string GetName();
	int GetX();
	int GetY();
	int GetCurrentXp();
	int GetXpToNext();
	int GetXpLevel();
	int GetCurrency();
	bool GetOnAttackStance();
	//Setters
	void SetName(string newName);
	void SetX(int newX);
	void SetY(int newY);
	void SetCurrentXp(int newCurrentXp);
	void SetXpToNext(int newXpToNext);
	void SetXpLevel(int newXpLevel);
	void SetCurrency(int newCurrency);
	void SetOnAttackStance(bool newOnAttackStance);
	//Other mutators
	void IncreaseX();
	void IncreaseY();
	void IncreaseXpLevel();
	//Level up procedure script
	void SkillUp();
	//Get total attributes
	int GetTotalDamage();
	int GetTotalSpeed();
	//Check if player has leveld up and if so call SkillUp to upgrade stats
	void CheckLevelUp();
};
