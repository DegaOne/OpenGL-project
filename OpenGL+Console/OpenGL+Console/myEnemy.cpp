#include "stdafx.h"
#include "myEnemy.h"



float Enemy::icon[9] = { 0.05f, 0.0f, 0.0f,  0.0f, 0.05f, 0.0f,  -0.05f, 0.0f, 0.0f };
//Constructor
Enemy::Enemy() {
	name = "Enemy1";
	isActive = false;
	isTurnOver = false;
	x = 0;
	y = 0;
	xpCount = 10;
	coinCount = 10;
}
//Enemy functions
//Getters
string Enemy::GetName() {
	return name;
}
bool Enemy::GetIsActive() {
	return isActive;
}
bool Enemy::GetIsTurnOver() {
	return isTurnOver;
}
int Enemy::GetX() {
	return x;
}
int Enemy::GetY() {
	return y;
}
int Enemy::GetXpCount() {
	return xpCount;
}
int Enemy::GetCoinCount() {
	return coinCount;
}
//Setters
void Enemy::SetName(string newName) {
	name = newName;
}
void Enemy::SetIsActive(bool newIsActive) {
	isActive = newIsActive;
}
void Enemy::SetIsTurnOver(bool newIsTurnOver) {
	isTurnOver = newIsTurnOver;
}
void Enemy::SetX(int newX) {
	x = newX;
}
void Enemy::SetY(int newY) {
	y = newY;
}
void Enemy::SetXpCount(int newXpCount) {
	xpCount = newXpCount;
}
void Enemy::SetCoinCount(int newCoinCount) {
	coinCount = newCoinCount;
}
//Other mutators
