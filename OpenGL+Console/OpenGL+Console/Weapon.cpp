#include "stdafx.h"
#include "Weapon.h"

	//Constructor
Weapon::Weapon() {
	attackMod = 0;
	speedMod = 0;
	price = 0;
	name = "default";
}
//Set all
void Weapon::SetWeapon(int attackMod, int speedMod,int price, string name) {
	SetAttackMod(attackMod);
	SetSpeedMod(speedMod);
	SetPrice(price);
	SetName(name);
}
	//Getters
string Weapon::GetName() {

	return name;

};
int Weapon::GetAttackMod() {

	return attackMod;

};
int Weapon::GetSpeedMod() {

	return speedMod;

};
int Weapon::GetPrice() {

	return price;

}
	//Setters
void Weapon::SetName(string newName) {

	name = newName;

};
void Weapon::SetAttackMod(int newAttackMod) {

	attackMod = newAttackMod;

};
void Weapon::SetSpeedMod(int newSpeedMod) {

	speedMod = newSpeedMod;

};
void Weapon::SetPrice(int newPrice) {

	price = newPrice;

}
