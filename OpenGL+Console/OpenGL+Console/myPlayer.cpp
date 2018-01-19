#include "stdafx.h"
#include "myPlayer.h"



float Player::icon[9] = { 0.1f, 0.0f, 0.0f,  0.0f, 0.1f, 0.0f,  -0.1f, 0.0f, 0.0f };
float Player::colourArray[12] = {
	0.0f, 1.0f, 0.0f, 1.0f, // rgba for vertex 1  
	0.0f, 1.0f, 0.0f, 1.0f,  // rgba for vertex 2  
	0.0f, 1.0f, 0.0f, 1.0f   // rgba for vertex 3   
};
//Constructor
Player::Player() {
	currency = 10;
	name = "";
	x = 1;
	y = 1;
	currentXp = 0;
	xpToNext = 100;
	xpLevel = 1;
	onAttackStance = false;
}
//Getters
string Player::GetName() {
	return name;
}
int Player::GetX() {
	return x;
}
int Player::GetY() {
	return y;
}
int Player::GetCurrentXp() {
	return currentXp;
}
int Player::GetXpToNext() {
	return xpToNext;
}
int Player::GetXpLevel() {
	return xpLevel;
}
int Player::GetCurrency() {
	return currency;

}
bool Player::GetOnAttackStance() {
	return onAttackStance;
}

//Setters
void Player::SetName(string newName) {
	name = newName;
}
void Player::SetX(int newX) {
	x = newX;
}
void Player::SetY(int newY) {
	y = newY;
}
void Player::SetCurrentXp(int newCurrentXp) {
	currentXp = newCurrentXp;
}
void Player::SetXpToNext(int newXpToNext) {
	xpToNext = newXpToNext;
}
void Player::SetXpLevel(int newXpLevel) {
	xpLevel = newXpLevel;
}
void Player::SetCurrency(int newCurrency) {
	currency = newCurrency;

}
void Player::SetOnAttackStance(bool newOnAttackStance)
{
	onAttackStance = newOnAttackStance;
}
//Other mutators
void Player::IncreaseX() {
	x++;
}
void Player::IncreaseY() {
	y++;
}
void Player::IncreaseXpLevel() {
	xpLevel++;
}
//Level up procedure script
void Player::SkillUp() {
	string answer;
	cout << "You leveled up!" << endl;
	//Enter five starting skill points with a "for" loop
	cout << "Enter your five skill points split between atk/spd/hpMax" << endl;
	for (int i = 0; i < 5; i++) {
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> answer;
		if (answer == "atk") {
			attributes.IncreaseAtk();
			cout << "Good!" << endl;
		}
		else if (answer == "spd") {
			attributes.IncreaseSpd();
			cout << "Good!" << endl;
		}
		else if (answer == "hpMax") {
			attributes.IncreaseHpMax();
			attributes.SetHp(attributes.GetHpMax());
			cout << "Good!" << endl;
		}
		else {
			cout << "Wrong answer! Repeat" << endl;
			i--;
		}

	}

	//Print out player's stats
	cout << name << " you are level " << GetXpLevel() << endl;
	cout << "These are your stats: " << endl;
	cout << "atk: " << attributes.GetAtk() << endl;
	cout << "spd: " << attributes.GetSpd() << endl;
	cout << "hpMax: " << attributes.GetHpMax() << endl;
}

//Calculate total damage
int Player::GetTotalDamage() {
	if (!Weapons.empty()) {
		return (attributes.GetAtk() + Weapons.top().GetAttackMod()) * 10;
	}
	else return attributes.GetAtk() * 10;
}
int Player::GetTotalSpeed() {
	if (!Weapons.empty()) {
		return attributes.GetSpd() + Weapons.top().GetSpeedMod();
	}
	else return attributes.GetSpd();
}
//Check if player has leveled up and if so call SkillUp to upgrade stats
void Player::CheckLevelUp() {
	if (GetCurrentXp() >= GetXpToNext()) {
		IncreaseXpLevel();
		SetCurrentXp(GetCurrentXp() - GetXpToNext());
		//Level XP curve
		SetXpToNext(GetXpToNext()*1.1);
		SkillUp();
	}
}

