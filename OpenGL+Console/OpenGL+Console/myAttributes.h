#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////ATTRIBUTES CLASS///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Attributes {
private:
	int hpMax;
	int hp;
	int spd;
	int atk;
	//Constructor
public:
	Attributes();
	//Attributes functions
	//Getters
	int GetHpMax();
	int GetHp();
	int GetSpd();
	int GetAtk();
	//Setters
	void SetHpMax(int newHpMax);
	void SetHp(int newHp);
	void SetSpd(int newSpd);
	void SetAtk(int newAtk);
	//Other mutators
	void IncreaseHpMax();
	void IncreaseHp();
	void IncreaseSpd();
	void IncreaseAtk();
};

