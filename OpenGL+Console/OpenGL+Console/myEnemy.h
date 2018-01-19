#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>
#include "myAttributes.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////ENEMY CLASS////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Enemy {
protected:
	string name;
	bool isActive;
	bool isTurnOver;
	int x;
	int y;
	int xpCount;
	int coinCount;
public:
	static float icon[9];
	Attributes attributes;
	Enemy();
	//Enemy functions
	//Getters
	string GetName();
	bool GetIsActive();
	bool GetIsTurnOver();
	int GetX();
	int GetY();
	int GetXpCount();
	int GetCoinCount();
	//Setters
	void SetName(string newName);
	void SetIsActive(bool newIsActive);
	void SetIsTurnOver(bool newIsTurnOver);
	void SetX(int newX);
	void SetY(int newY);
	void SetXpCount(int newXpCount);
	void SetCoinCount(int newCoinCount);
	//Other mutators
};
