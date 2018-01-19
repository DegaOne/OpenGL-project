
#include "stdafx.h"
#include "myGame.h"


float Game:: portalIcon[9] = { 0.125f, 0.0f, 0.0f,  0.0f, 0.125f, 0.0f,  -0.125f, 0.0f, 0.0f };
//Is this the right way of default constructing an array member? Look for info

char Game::levels[NUMBER_OF_LEVELS][LEVEL_HEIGHT][LEVEL_WIDTH] = {
#pragma region  //Level arrays
	//Level 1 
	{
		{ '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/' },
		{ '/', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', 'E', ' ', ' ', ' ', ' ', ' ', ' ', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/' }
	},
	//Level 2
	{
		{ '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/' },
		{ '/', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/' }
	},
	//Level 3
	{
		{ '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/' },
		{ '/', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/' },
		{ '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', '/' },
		{ '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/', '/' }
	}
#pragma endregion
};

float Game::wallColours[12] = {
	1.0f, 0.0f, 0.0f, 1.0f, // rgba for vertex 1  
	1.0f, 0.0f, 0.0f, 1.0f,  // rgba for vertex 2  
	1.0f, 0.0f, 0.0f, 1.0f   // rgba for vertex 3   
};
float Game::portalColours[12] = {
	1.0f, 1.0f, 0.0f, 1.0f, // rgba for vertex 1  
	1.0f, 1.0f, 0.0f, 1.0f,  // rgba for vertex 2  
	1.0f, 1.0f, 0.0f, 1.0f   // rgba for vertex 3   
};
int Game::levelsXp[NUMBER_OF_LEVELS] = { 100, 120, 130 };//Get //Set
int Game::levelStartingCoords[NUMBER_OF_LEVELS][2] = { { 1, 1 },{ 1, 1 },{ 1, 1 } };//Get //Set


//Constructor
Game::Game() {
	//Set initial level to 0
	currentLevel = 0;
	//Initialize weapons and put them into stack
	Weapon weapon3;
	weapon3.SetWeapon(5, -2,50, "Steel Hammer");
	Weapons.push(weapon3);
	Weapon weapon2;
	weapon2.SetWeapon(3, 0,30, "Steel sword");
	Weapons.push(weapon2);
	Weapon weapon1;
	weapon1.SetWeapon(1, -1,10, "Wooden sword");
	Weapons.push(weapon1);
	//Active enemy instances on each level
	//On level 1
	for (int i = 0; i < NUMBER_OF_ENEMIES_1; i++) {
		enemies[0][i].SetIsActive(true);
	}
	//On level 2
	for (int i = 0; i < NUMBER_OF_ENEMIES_2; i++) {
		enemies[1][i].SetIsActive(true);
	}
	//On level 3
	for (int i = 0; i < NUMBER_OF_ENEMIES_3; i++) {
		enemies[2][i].SetIsActive(true);
	}
	//Active enemy2 instances on each level
	//On level 1
	for (int i = 0; i < NUMBER_OF_ENEMIES2_1; i++) {
		enemies2[0][i].SetIsActive(true);
	}
	//On level 2
	for (int i = 0; i < NUMBER_OF_ENEMIES2_2; i++) {
		enemies2[1][i].SetIsActive(true);
	}
	//On level 3
	for (int i = 0; i < NUMBER_OF_ENEMIES2_3; i++) {
		enemies2[2][i].SetIsActive(true);
	}
}
//Game functions
//Getters

char Game::GetLevels(int levelIndex, int levelHeight, int levelWidth) {
	//Return if arguments are correct
	if (levels[levelIndex - 1][levelHeight][levelWidth] != NULL) {
		return levels[levelIndex - 1][levelHeight][levelWidth];
	}
	else cout << "There is no such level or level coordinate" << endl;
}

int Game::GetCurrentLevel() {
	return currentLevel;
}

int Game::GetLevelsXp(int levelIndex) {
	//Return if arguments are correct
	if (levelIndex>0 && levelIndex <= NUMBER_OF_LEVELS) return levelsXp[levelIndex - 1];
	else cout << "There is no such level" << endl;
}


int Game::GetLevelStartingCoordX(int levelIndex) {
	if (levelIndex > 0 && levelIndex <= NUMBER_OF_LEVELS) 	return levelStartingCoords[levelIndex - 1][0];

}

int Game::GetLevelStartingCoordY(int levelIndex) {
	if (levelIndex > 0 && levelIndex <= NUMBER_OF_LEVELS) 	return levelStartingCoords[levelIndex - 1][1];
}



//Setters
void Game::SetCurrentLevel(int newCurrentLevel) {
	currentLevel = newCurrentLevel;
}

void Game::SetLevels(int levelIndex, int levelHeight, int levelWidth, char newChar) {
	//Set if arguments are correct
	if (levels[levelIndex - 1][levelHeight][levelWidth] != NULL) {
		levels[levelIndex - 1][levelHeight][levelWidth] = newChar;
	}
	else cout << "There is no such level or level coordinate" << endl;
}

void Game::SetLevelsXp(int levelIndex, int newLevelXp) {
	//Set if arguments are correct
	if (levelsXp[levelIndex - 1] != NULL) {
		levelsXp[levelIndex - 1] = newLevelXp;
	}
	else cout << "There is no such level" << endl;
}
void Game::SetLevelStartingCoordX(int levelIndex, int newX)
{
	if (levelIndex > 0 && levelIndex <= NUMBER_OF_LEVELS) {
		if (newX >= 0 && newX < LEVEL_WIDTH) levelStartingCoords[levelIndex - 1][0] = newX;
		else cout << "X coord not within range of level" << endl;
	}
	else cout << "That level doesnt exist" << endl;
}
void Game::SetLevelStartingCoordY(int levelIndex, int newY)
{
	if (levelIndex > 0 && levelIndex <= NUMBER_OF_LEVELS) {
		if (newY >= 0 && newY < LEVEL_HEIGHT) levelStartingCoords[levelIndex - 1][1] = newY;
		else cout << "Y coord not within range of level" << endl;
	}
	else cout << "That level doesnt exist" << endl;
}
//Other mutators

//Move player in the array and set new coordinates
void Game::MoveUp(Player &thePlayer) {
	if (GetLevels(GetCurrentLevel(), thePlayer.GetY() - 1, thePlayer.GetX()) == ' ') {
		SetLevels(GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX(), ' ');
		SetLevels(GetCurrentLevel(), thePlayer.GetY() - 1, thePlayer.GetX(), '0');
		//Set new coord
		thePlayer.SetY(thePlayer.GetY() - 1);
	}
	else cout << "You can't move up" << endl;
}
void Game::MoveDown(Player &thePlayer) {
	if (GetLevels(GetCurrentLevel(), thePlayer.GetY() + 1, thePlayer.GetX()) == ' ') {
		SetLevels(GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX(), ' ');
		SetLevels(GetCurrentLevel(), thePlayer.GetY() + 1, thePlayer.GetX(), '0');
		//Set new coord
		thePlayer.SetY(thePlayer.GetY() + 1);
	}
	else cout << "You can't move down" << endl;
}
void Game::MoveLeft(Player &thePlayer) {
	if (GetLevels(GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX() - 1) == ' ') {
		SetLevels(GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX(), ' ');
		SetLevels(GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX() - 1, '0');
		//Set new coord
		thePlayer.SetX(thePlayer.GetX() - 1);
	}
	else cout << "You can't move left" << endl;
}
void Game::MoveRight(Player &thePlayer) {
	if (GetLevels(GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX() + 1) == ' ') {
		SetLevels(GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX(), ' ');
		SetLevels(GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX() + 1, '0');
		//Set new coord
		thePlayer.SetX(thePlayer.GetX() + 1);
	}
	else cout << "You can't move right" << endl;
}
//Other mutators
void Game::EMovement(Player &thePlayer, Enemy &theEnemy)
{
	//Check whether player is in range of detection
	int xDis, yDis;
	float totalDis;
	xDis = theEnemy.GetX() - thePlayer.GetX();
	yDis = theEnemy.GetY() - thePlayer.GetY();
	totalDis = sqrt(pow(xDis, 2) + pow(yDis, 2));
	//Generate random number to decide whether to prioritize vertical or horizontal movement
	float myRandom;
	/* generate random number between 1 and 10: */
	myRandom = rand() % 10 + 1;
	//Check if player is on detection range
	if (totalDis <= ENEMY_RANGE && totalDis > 1) {
		//If it is, move towards it
		if (myRandom < 5) {
			//Case 1 prioritize horizontal movement
			if (xDis > 0) {
				//If player is to the left
				EMoveLeft(theEnemy);
				return;
			}
			else if (xDis < 0) {
				//Else if player is to the right
				EMoveRight(theEnemy);
				return;
			}

			//Then check vertical movement
			if (yDis > 0) {
				//If player is upper
				EMoveUp(theEnemy);
				return;
			}
			else if (yDis < 0) {
				//Else if player is below
				EMoveDown(theEnemy);
				return;
			}
		}
		else {
			//Case 2 prioritize vertical movement
			if (yDis > 0) {
				//If player is upper
				EMoveUp(theEnemy);
				return;
			}
			else if (yDis < 0) {
				//Else if player is below
				EMoveDown(theEnemy);
				return;
			}

			//Then check horizontal movement
			if (xDis > 0) {
				//If player is to the left
				EMoveLeft(theEnemy);
				return;
			}
			else if (xDis < 0) {
				//Else if player is to the right
				EMoveRight(theEnemy);
				return;
			}
		}
		//**If it crashes with a wall , move randomly (Inside EMoveLeft,right,etc functions)
	}
	//Check if enemy is at attack range
	else if (totalDis <= 1 && totalDis > 0) {
		//If it is , check if it has moved already
		if (!theEnemy.GetIsTurnOver()) {
			//If it hasnt, get a free attack on the player
			thePlayer.attributes.SetHp(thePlayer.attributes.GetHp() - theEnemy.attributes.GetAtk() * 10);
			cout << "You receive " << theEnemy.attributes.GetAtk() * 10 << " damage and remain with " << thePlayer.attributes.GetHp() << " health" << endl;
			CheckPlayerHealth(thePlayer);
		}

	}
	//If player is further than detection range from player
	else {
		//Use the same random number to determine position to move towards
		if (myRandom <= 2.5) {
			EMoveLeft(theEnemy);
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			EMoveRight(theEnemy);
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			EMoveUp(theEnemy);
		}
		else EMoveDown(theEnemy);
	}
	//Regardless of result , end enemy's turn after this function
	theEnemy.SetIsTurnOver(true);
}
void Game::EMovement(Player &thePlayer, Enemy2 &theEnemy2)
{
	//Check whether player is in range of detection
	int xDis, yDis;
	float totalDis;
	xDis = theEnemy2.GetX() - thePlayer.GetX();
	yDis = theEnemy2.GetY() - thePlayer.GetY();
	totalDis = sqrt(pow(xDis, 2) + pow(yDis, 2));
	//Generate random number to decide whether to prioritize vertical or horizontal movement
	float myRandom;
	/* generate random number between 1 and 10: */
	myRandom = rand() % 10 + 1;
	//Check if player is on detection range
	if (totalDis <= ENEMY_RANGE && totalDis > 1) {
		//If it is, move towards it
		if (myRandom < 5) {
			//Case 1 prioritize horizontal movement
			if (xDis > 0) {
				//If player is to the left
				EMoveLeft(theEnemy2);
				return;
			}
			else if (xDis < 0) {
				//Else if player is to the right
				EMoveRight(theEnemy2);
				return;
			}

			//Then check vertical movement
			if (yDis > 0) {
				//If player is upper
				EMoveUp(theEnemy2);
				return;
			}
			else if (yDis < 0) {
				//Else if player is below
				EMoveDown(theEnemy2);
				return;
			}
		}
		else {
			//Case 2 prioritize vertical movement
			if (yDis > 0) {
				//If player is upper
				EMoveUp(theEnemy2);
				return;
			}
			else if (yDis < 0) {
				//Else if player is below
				EMoveDown(theEnemy2);
				return;
			}

			//Then check horizontal movement
			if (xDis > 0) {
				//If player is to the left
				EMoveLeft(theEnemy2);
				return;
			}
			else if (xDis < 0) {
				//Else if player is to the right
				EMoveRight(theEnemy2);
				return;
			}
		}
		//**If it crashes with a wall , move randomly (Inside EMoveLeft,right,etc functions)
	}
	//Check if enemy is at attack range
	else if (totalDis <= 1 && totalDis > 0) {
		//If it is , check if it has moved already
		if (!theEnemy2.GetIsTurnOver()) {
			//If it hasnt, get a free attack on the player
			thePlayer.attributes.SetHp(thePlayer.attributes.GetHp() - theEnemy2.attributes.GetAtk() * 10);
			cout << "You receive " << theEnemy2.attributes.GetAtk() * 10 << " damage and remain with " << thePlayer.attributes.GetHp() << " health" << endl;
			CheckPlayerHealth(thePlayer);
		}

	}
	//If player is further than detection range from player
	else {
		//Use the same random number to determine position to move towards
		if (myRandom <= 2.5) {
			EMoveLeft(theEnemy2);
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			EMoveRight(theEnemy2);
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			EMoveUp(theEnemy2);
		}
		else EMoveDown(theEnemy2);
	}
	//Regardless of result , end enemy's turn after this function
	theEnemy2.SetIsTurnOver(true);
}
void Game::EMoveLeft(Enemy &theEnemy) {
	if (GetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX() - 1) == ' ') {
		//If left cell is empty
		SetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX(), ' ');
		SetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX() - 1, 'E');
		theEnemy.SetX(theEnemy.GetX() - 1);
		//don't run rest of movement function if already moved
		return;
	}
	else {
		//If left cell is not empty move randomly
		float myRandom;

		/* generate random number between 1 and 10: */
		myRandom = rand() % 10 + 1;
		if (myRandom <= 2.5) {
			return;
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			EMoveRight(theEnemy);
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			EMoveUp(theEnemy);
		}
		else EMoveDown(theEnemy);
	}
}
void Game::EMoveRight(Enemy &theEnemy) {
	if (GetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX() + 1) == ' ') {
		//If right cell is empty
		SetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX(), ' ');
		SetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX() + 1, 'E');
		theEnemy.SetX(theEnemy.GetX() + 1);
		//don't run rest of movement function if already moved
		return;
	}
	else {
		//If right cell is not empty move randomly
		float myRandom;
		/* generate random number between 1 and 10: */
		myRandom = rand() % 10 + 1;
		if (myRandom <= 2.5) {
			EMoveLeft(theEnemy);
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			return;
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			EMoveUp(theEnemy);
		}
		else EMoveDown(theEnemy);
	}
}
void Game::EMoveUp(Enemy &theEnemy) {
	if (GetLevels(GetCurrentLevel(), theEnemy.GetY() - 1, theEnemy.GetX()) == ' ') {
		//If upper cell is empty
		SetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX(), ' ');
		SetLevels(GetCurrentLevel(), theEnemy.GetY() - 1, theEnemy.GetX(), 'E');
		theEnemy.SetY(theEnemy.GetY() - 1);
		//don't run rest of movement function if already moved
		return;
	}
	else {
		//If up cell is not empty move randomly
		float myRandom;
		/* generate random number between 1 and 10: */
		myRandom = rand() % 10 + 1;
		if (myRandom <= 2.5) {
			EMoveLeft(theEnemy);
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			EMoveRight(theEnemy);
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			return;
		}
		else EMoveDown(theEnemy);
	}
}
void Game::EMoveDown(Enemy &theEnemy) {
	if (GetLevels(GetCurrentLevel(), theEnemy.GetY() + 1, theEnemy.GetX()) == ' ') {
		//If below cell is empty
		SetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX(), ' ');
		SetLevels(GetCurrentLevel(), theEnemy.GetY() + 1, theEnemy.GetX(), 'E');
		theEnemy.SetY(theEnemy.GetY() + 1);
		//don't run rest of movement function if already moved
		return;
	}
	else {
		//If below cell is not empty move randomly
		float myRandom;
		/* generate random number between 1 and 10: */
		myRandom = rand() % 10 + 1;
		if (myRandom <= 2.5) {
			EMoveLeft(theEnemy);
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			EMoveRight(theEnemy);
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			EMoveUp(theEnemy);
		}
		else return;
	}
}

void Game::EMoveLeft(Enemy2 &theEnemy2) {
	if (GetLevels(GetCurrentLevel(), theEnemy2.GetY(), theEnemy2.GetX() - 1) == ' ') {
		//If left cell is empty
		SetLevels(GetCurrentLevel(), theEnemy2.GetY(), theEnemy2.GetX(), ' ');
		SetLevels(GetCurrentLevel(), theEnemy2.GetY(), theEnemy2.GetX() - 1, 'R');
		theEnemy2.SetX(theEnemy2.GetX() - 1);
		//don't run rest of movement function if already moved
		return;
	}
	else {
		//If left cell is not empty move randomly
		float myRandom;

		/* generate random number between 1 and 10: */
		myRandom = rand() % 10 + 1;
		if (myRandom <= 2.5) {
			return;
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			EMoveRight(theEnemy2);
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			EMoveUp(theEnemy2);
		}
		else EMoveDown(theEnemy2);
	}
}
void Game::EMoveRight(Enemy2 &theEnemy2) {
	if (GetLevels(GetCurrentLevel(), theEnemy2.GetY(), theEnemy2.GetX() + 1) == ' ') {
		//If right cell is empty
		SetLevels(GetCurrentLevel(), theEnemy2.GetY(), theEnemy2.GetX(), ' ');
		SetLevels(GetCurrentLevel(), theEnemy2.GetY(), theEnemy2.GetX() + 1, 'R');
		theEnemy2.SetX(theEnemy2.GetX() + 1);
		//don't run rest of movement function if already moved
		return;
	}
	else {
		//If right cell is not empty move randomly
		float myRandom;
		/* generate random number between 1 and 10: */
		myRandom = rand() % 10 + 1;
		if (myRandom <= 2.5) {
			EMoveLeft(theEnemy2);
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			return;
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			EMoveUp(theEnemy2);
		}
		else EMoveDown(theEnemy2);
	}
}
void Game::EMoveUp(Enemy2 &theEnemy2) {
	if (GetLevels(GetCurrentLevel(), theEnemy2.GetY() - 1, theEnemy2.GetX()) == ' ') {
		//If upper cell is empty
		SetLevels(GetCurrentLevel(), theEnemy2.GetY(), theEnemy2.GetX(), ' ');
		SetLevels(GetCurrentLevel(), theEnemy2.GetY() - 1, theEnemy2.GetX(), 'R');
		theEnemy2.SetY(theEnemy2.GetY() - 1);
		//don't run rest of movement function if already moved
		return;
	}
	else {
		//If up cell is not empty move randomly
		float myRandom;
		/* generate random number between 1 and 10: */
		myRandom = rand() % 10 + 1;
		if (myRandom <= 2.5) {
			EMoveLeft(theEnemy2);
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			EMoveRight(theEnemy2);
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			return;
		}
		else EMoveDown(theEnemy2);
	}
}
void Game::EMoveDown(Enemy2 &theEnemy2) {
	if (GetLevels(GetCurrentLevel(), theEnemy2.GetY() + 1, theEnemy2.GetX()) == ' ') {
		//If below cell is empty
		SetLevels(GetCurrentLevel(), theEnemy2.GetY(), theEnemy2.GetX(), ' ');
		SetLevels(GetCurrentLevel(), theEnemy2.GetY() + 1, theEnemy2.GetX(), 'R');
		theEnemy2.SetY(theEnemy2.GetY() + 1);
		//don't run rest of movement function if already moved
		return;
	}
	else {
		//If below cell is not empty move randomly
		float myRandom;
		/* generate random number between 1 and 10: */
		myRandom = rand() % 10 + 1;
		if (myRandom <= 2.5) {
			EMoveLeft(theEnemy2);
		}
		else if (myRandom <= 5 && myRandom > 2.5) {
			EMoveRight(theEnemy2);
		}
		else if (myRandom <= 7.5 && myRandom > 5) {
			EMoveUp(theEnemy2);
		}
		else return;
	}
}
void Game::IncreaseCurrentLevel() {
	currentLevel++;
}

//Identify level , player position and print both (Levels are held on a 3d array and are all 5 by 5)
void Game::CheckArray() {
	for (int y = 0; y < LEVEL_HEIGHT; y++) {
		for (int x = 0; x < LEVEL_WIDTH; x++) {
			if (GetLevels(GetCurrentLevel(), y, x) != ' ') {
				// first triangle...
				glLoadIdentity();
				glTranslatef(-1.0f+x*0.1f, 1.0f-y*0.1f, -4.0f);
				if (GetLevels(GetCurrentLevel(), y, x) == '0') {
					DrawPlayerSettings();
				}
				else if (GetLevels(GetCurrentLevel(), y, x) == 'E') {
					DrawEnemy1Settings();
				}
				else if (GetLevels(GetCurrentLevel(), y, x) == 'R') {
					DrawEnemy2Settings();
				}
				else if (GetLevels(GetCurrentLevel(), y, x) == '/') {
					DrawWallSettings();
				}
				else if (GetLevels(GetCurrentLevel(), y, x) == 'P') {
					DrawPortalSettings();
				}
				glDrawArrays(GL_TRIANGLES, 0, 3);
			}
		}
		//Swap height
		
	}
}
//Draw settings used in CheckArray()
void Game::DrawPlayerSettings() {
	glVertexPointer(3, GL_FLOAT, 0, Player::icon);			//wip
	glEnableClientState(GL_COLOR_ARRAY);
	glColorPointer(4, GL_FLOAT, 0, Player::colourArray);
}
void Game::DrawEnemy1Settings() {
	glVertexPointer(3, GL_FLOAT, 0, Enemy::icon);			//wip
	glDisableClientState(GL_COLOR_ARRAY);
}
void Game::DrawEnemy2Settings() {
	glVertexPointer(3, GL_FLOAT, 0, Enemy2::icon);			//wip
	glEnableClientState(GL_COLOR_ARRAY);
	glColorPointer(4, GL_FLOAT, 0, Enemy2::colourArray);
}
void Game::DrawWallSettings() {
	glVertexPointer(3, GL_FLOAT, 0, Player::icon);			//wip
	glEnableClientState(GL_COLOR_ARRAY);
	glColorPointer(4, GL_FLOAT, 0, wallColours);
}
void Game::DrawPortalSettings() {
	glVertexPointer(3, GL_FLOAT, 0, Game::portalIcon);			//wip
	glEnableClientState(GL_COLOR_ARRAY);
	glColorPointer(4, GL_FLOAT, 0, portalColours);
}
//Initialize enemy instances and player's starting coordinates
void Game::SetStartingCoords(Player &thePlayer) {
	//variable for enemy number
	int enemyIndex = 0;
	int enemy2Index = 0;
	//Run through array
	for (int y = 0; y < LEVEL_HEIGHT; y++) {
		for (int x = 0; x < LEVEL_WIDTH; x++) {
			//Check enemy at position
			if (GetLevels(GetCurrentLevel(), y, x) == 'E') {
				//If found an enemy instance
				enemies[currentLevel - 1][enemyIndex].SetX(x);
				enemies[currentLevel - 1][enemyIndex].SetY(y);
				enemyIndex++;
			}
			else if (GetLevels(GetCurrentLevel(), y, x) == 'R') {
				//If found an enemy instance
				enemies2[currentLevel - 1][enemy2Index].SetX(x);
				enemies2[currentLevel - 1][enemy2Index].SetY(y);
				enemy2Index++;
			}
			else if (GetLevels(GetCurrentLevel(), y, x) == '0') {
				thePlayer.SetX(x);
				thePlayer.SetY(y);
			}
		}
	}
}

void Game::EngageAttack(Player & thePlayer, char myAnswer)
{
	switch (myAnswer) {
		//Attack above
	case 'w':
		FindEnemiesAbove(thePlayer);
		break;
		//Attack below
	case 's':
		FindEnemiesBelow(thePlayer);
		break;
		//Attack left
	case 'a':
		FindEnemiesLeft(thePlayer);
		break;
		//Attack right
	case 'd':
		FindEnemiesRight(thePlayer);
		break;
	default:
		cout << "Wrong input!" << endl;
		break;

	}
}
void Game::FindEnemiesAbove(Player & thePlayer)
{
	for (int i = 0; i < MAX_ENEMY_NUMBER; i++) {
		//Run through array of enemies
		if (enemies[currentLevel - 1][i].GetIsActive()) {
			//Find those active in the level
			if (enemies[currentLevel - 1][i].GetX() == thePlayer.GetX() && enemies[currentLevel - 1][i].GetY() == thePlayer.GetY() - 1) {
				//If there is an enemy instance where we want to attack , above the player
				DealDamage(thePlayer, enemies[currentLevel - 1][i]);
			}
		}
		//Run through array of enemies2
		if (enemies2[currentLevel - 1][i].GetIsActive()) {
			//Find those active in the level
			if (enemies2[currentLevel - 1][i].GetX() == thePlayer.GetX() && enemies2[currentLevel - 1][i].GetY() == thePlayer.GetY() - 1) {
				//If there is an enemy2 instance where we want to attack , above the player
				DealDamage(thePlayer, enemies2[currentLevel - 1][i]);
			}
		}
	}
}
void Game::FindEnemiesBelow(Player & thePlayer)
{
	for (int i = 0; i < MAX_ENEMY_NUMBER; i++) {
		//Run through array of enemies
		if (enemies[currentLevel - 1][i].GetIsActive()) {
			//Find those active in the level
			if (enemies[currentLevel - 1][i].GetX() == thePlayer.GetX() && enemies[currentLevel - 1][i].GetY() == thePlayer.GetY() + 1) {
				//If there is an enemy instance where we want to attack , below the player
				DealDamage(thePlayer, enemies[currentLevel - 1][i]);
			}
		}
		//Run through array of enemies2
		if (enemies2[currentLevel - 1][i].GetIsActive()) {
			//Find those active in the level
			if (enemies2[currentLevel - 1][i].GetX() == thePlayer.GetX() && enemies2[currentLevel - 1][i].GetY() == thePlayer.GetY() + 1) {
				//If there is an enemy2 instance where we want to attack , below the player
				DealDamage(thePlayer, enemies2[currentLevel - 1][i]);
			}
		}
	}
}
void Game::FindEnemiesLeft(Player & thePlayer)
{
	for (int i = 0; i < MAX_ENEMY_NUMBER; i++) {
		//Run through array of enemies
		if (enemies[currentLevel - 1][i].GetIsActive()) {
			//Find those active in the level
			if (enemies[currentLevel - 1][i].GetX() == thePlayer.GetX() - 1 && enemies[currentLevel - 1][i].GetY() == thePlayer.GetY()) {
				//If there is an enemy instance where we want to attack , left of player
				DealDamage(thePlayer, enemies[currentLevel - 1][i]);
			}
		}
		//Run through array of enemies2
		if (enemies2[currentLevel - 1][i].GetIsActive()) {
			//Find those active in the level
			if (enemies2[currentLevel - 1][i].GetX() == thePlayer.GetX() - 1 && enemies2[currentLevel - 1][i].GetY() == thePlayer.GetY()) {
				//If there is an enemy2 instance where we want to attack , left of player
				DealDamage(thePlayer, enemies2[currentLevel - 1][i]);
			}
		}
	}
}
void Game::FindEnemiesRight(Player & thePlayer)
{
	for (int i = 0; i < MAX_ENEMY_NUMBER; i++) {
		//Run through array of enemies
		if (enemies[currentLevel - 1][i].GetIsActive()) {
			//Find those active in the level
			if (enemies[currentLevel - 1][i].GetX() == thePlayer.GetX() + 1 && enemies[currentLevel - 1][i].GetY() == thePlayer.GetY()) {
				//If there is an enemy2 instance where we want to attack at the right position
				DealDamage(thePlayer, enemies[currentLevel - 1][i]);
			}
		}
		//Run through array of enemies2
		if (enemies2[currentLevel - 1][i].GetIsActive()) {
			//Find those active in the level
			if (enemies2[currentLevel - 1][i].GetX() == thePlayer.GetX() + 1 && enemies2[currentLevel - 1][i].GetY() == thePlayer.GetY()) {
				//If there is an enemy2 instance where we want to attack at the right position
				DealDamage(thePlayer, enemies2[currentLevel - 1][i]);
			}
		}
	}
}
//Run movement script on activated enemy instances in the level
void Game::RunEnemiesMovement(Player &thePlayer) {
	for (int i = 0; i < MAX_ENEMY_NUMBER; i++) {
		//If enemy in the array is activated (alive) and hasn't finished his turn then run its movement script
		if (enemies[currentLevel - 1][i].GetIsActive() && !enemies[currentLevel - 1][i].GetIsTurnOver()) EMovement(thePlayer, enemies[currentLevel - 1][i]);
		//If enemy2 in the array is activated (alive) and hasn't finished his turn then run its movement script
		if (enemies2[currentLevel - 1][i].GetIsActive() && !enemies2[currentLevel - 1][i].GetIsTurnOver()) EMovement(thePlayer, enemies2[currentLevel - 1][i]);
	}
}

//Refresh enemy turns
void Game::NewEnemyTurn() {
	for (int i = 0; i < MAX_ENEMY_NUMBER; i++) {
		//If enemy in the array is activated (alive) then refresh its turn
		if (enemies[currentLevel - 1][i].GetIsActive()) enemies[currentLevel - 1][i].SetIsTurnOver(false);
		//If enemy2 in the array is activated (alive) then refresh its turn
		if (enemies2[currentLevel - 1][i].GetIsActive()) enemies2[currentLevel - 1][i].SetIsTurnOver(false);
	}
}

//Check if enemy is still alive ; If dead , deactivate it and give XP and coins to the player and overwrite level array
void Game::CheckEnemyHealth(Player &thePlayer, Enemy &theEnemy) {
	//If enemy died
	if (theEnemy.attributes.GetHp() <= 0) {
		//Give player xp and coins
		thePlayer.SetCurrentXp(thePlayer.GetCurrentXp() + theEnemy.GetXpCount());
		thePlayer.CheckLevelUp();
		thePlayer.SetCurrency(thePlayer.GetCurrency() + theEnemy.GetCoinCount());
		cout << "You find " <<  theEnemy.GetCoinCount() << " coins" << endl;
		//Deactivate instance and delete from array so that its not drawn
		theEnemy.SetIsActive(false);
		SetLevels(GetCurrentLevel(), theEnemy.GetY(), theEnemy.GetX(), ' ');
	}
}
//Check if player is still alive ; If dead , end the game
void Game::CheckPlayerHealth(Player &thePlayer) {
	if (thePlayer.attributes.GetHp() <= 0) {
		string pause;
		cout << thePlayer.GetName() << " , you have died on level " << GetCurrentLevel() << endl;
		//Wait for input to close game
		cin >> pause;
		cin.clear();
		cin.ignore(10000, '\n');
		exit(0);
	}
}
//Deal damage between player and enemy object
void Game::DealDamage(Player &thePlayer , Enemy &theEnemy) {
	//Check speeds to see who attacks first
	if (thePlayer.GetTotalSpeed() >= theEnemy.attributes.GetSpd()) {
		//Player attacks first
		PlayerAttacksEnemy(thePlayer, theEnemy);
		//If enemy hasnt previously moved and is still alive after the attack
		if (!theEnemy.GetIsTurnOver() && theEnemy.GetIsActive()) {
			//Attack player
			EnemyAttacksPlayer(thePlayer, theEnemy);
		}
		//End enemy's turn
		theEnemy.SetIsTurnOver(true);
	}
	else {
		//Enemy attacks first
		//If enemy hasnt previously moved
		if (!theEnemy.GetIsTurnOver()) {
			//Attack player
			EnemyAttacksPlayer(thePlayer, theEnemy);
		}
		//End enemy's turn
		theEnemy.SetIsTurnOver(true);
		//Player attacks enemy
		PlayerAttacksEnemy(thePlayer, theEnemy);
	}
}
//Deal damage between player and enemy object
void Game::DealDamage(Player &thePlayer, Enemy2 &theEnemy2) {
	//Check speeds to see who attacks first
	if (thePlayer.GetTotalSpeed() >= theEnemy2.attributes.GetSpd()) {
		//Player attacks first
		PlayerAttacksEnemy(thePlayer, theEnemy2);
		//If enemy hasnt previously moved and is still alive after the attack
		if (!theEnemy2.GetIsTurnOver() && theEnemy2.GetIsActive()) {
			//Attack player
			EnemyAttacksPlayer(thePlayer, theEnemy2);
		}
		//End enemy's turn
		theEnemy2.SetIsTurnOver(true);
	}
	else {
		//Enemy attacks first
		//If enemy hasnt previously moved
		if (!theEnemy2.GetIsTurnOver()) {
			//Attack player
			EnemyAttacksPlayer(thePlayer, theEnemy2);
		}
		//End enemy's turn
		theEnemy2.SetIsTurnOver(true);
		//Player attacks enemy
		PlayerAttacksEnemy(thePlayer, theEnemy2);
	}
}
//Health substraction functions
void Game::PlayerAttacksEnemy(Player &thePlayer, Enemy &theEnemy) {
	theEnemy.attributes.SetHp(theEnemy.attributes.GetHp() - thePlayer.GetTotalDamage());
	cout << "Enemy receives " << thePlayer.GetTotalDamage() << " damage" << endl;
	CheckEnemyHealth(thePlayer, theEnemy);
}
void Game::PlayerAttacksEnemy(Player &thePlayer, Enemy2 &theEnemy2) {
	theEnemy2.attributes.SetHp(theEnemy2.attributes.GetHp() - thePlayer.GetTotalDamage());
	cout << "Enemy2 receives " << thePlayer.GetTotalDamage() << " damage" << endl;
	CheckEnemyHealth(thePlayer, theEnemy2);
}
void Game::EnemyAttacksPlayer(Player &thePlayer, Enemy &theEnemy) {
	thePlayer.attributes.SetHp(thePlayer.attributes.GetHp() - theEnemy.attributes.GetAtk() * 10);
	cout << "You receive " << theEnemy.attributes.GetAtk() * 10 << " damage and remain with " << thePlayer.attributes.GetHp() << " health" << endl;
	CheckPlayerHealth(thePlayer);
}
void Game::EnemyAttacksPlayer(Player &thePlayer, Enemy2 &theEnemy2) {
	thePlayer.attributes.SetHp(thePlayer.attributes.GetHp() - theEnemy2.attributes.GetAtk() * 10);
	cout << "You receive " << theEnemy2.attributes.GetAtk() * 10 << " damage and remain with " << thePlayer.attributes.GetHp() << " health" << endl;
	CheckPlayerHealth(thePlayer);
}