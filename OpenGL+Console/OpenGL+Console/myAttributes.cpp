#include "stdafx.h"
#include "myAttributes.h"


//Constructor
Attributes::Attributes() {
	hpMax = 100;
	hp = hpMax;
	spd = 1;
	atk = 1;
}
//Attributes functions

//Getters
int Attributes::GetHpMax() {
	return hpMax;
}
int Attributes::GetHp() {
	return hp;
}
int Attributes::GetSpd() {
	return spd;
}
int Attributes::GetAtk() {
	return atk;
}
//Setters
void Attributes::SetHpMax(int newHpMax) {
	hpMax = newHpMax;
}
void Attributes::SetHp(int newHp) {
	hp = newHp;
}
void Attributes::SetSpd(int newSpd) {
	spd = newSpd;
}
void Attributes::SetAtk(int newAtk) {
	atk = newAtk;
}
//Other mutators
void Attributes::IncreaseHpMax() {
	hpMax += 10;
}
void Attributes::IncreaseHp() {
	hp++;
}
void Attributes::IncreaseSpd() {
	spd++;
}
void Attributes::IncreaseAtk() {
	atk++;
}