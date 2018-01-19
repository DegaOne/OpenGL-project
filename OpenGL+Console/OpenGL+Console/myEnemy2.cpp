#include "stdafx.h"
#include "myEnemy2.h"


float Enemy2::icon[9] = { 0.1f, 0.0f, 0.0f,  0.0f, 0.1f, 0.0f,  -0.1f, 0.0f, 0.0f };
float Enemy2::colourArray[12] = {
	0.0f, 0.0f, 1.0f, 1.0f, // rgba for vertex 1  
	0.0f, 0.0f, 1.0f, 1.0f,  // rgba for vertex 2  
	0.0f, 0.0f, 1.0f, 1.0f   // rgba for vertex 3   
};
//Constructor
Enemy2::Enemy2() {
	Enemy::name = "Enemy2";
	Enemy::attributes.SetHpMax(120);
	Enemy::attributes.SetHp(120);
	Enemy::coinCount = 20;
}
//Enemy functions
//Getters

//Setters

//Other mutators
