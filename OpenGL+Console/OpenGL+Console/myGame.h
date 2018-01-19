#pragma once
#include "stdafx.h"
#include "myPlayer.h"
#include "myEnemy.h"
#include "myEnemy2.h"
#include "myAttributes.h"
#include "Weapon.h"
#include <iostream>
using namespace std;
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <cstdlib> //exit()
#include <math.h>
#include <string>
#include <windows.h>	// need this file if you want to create windows etc
#include <gl/gl.h>		// need this file to do graphics with opengl
#include <gl/glu.h>		// need this file to set up a perspective projection easily

#define NUMBER_OF_LEVELS 3
#define LEVEL_HEIGHT 25
#define LEVEL_WIDTH 25
#define NUMBER_OF_ENEMIES_1 1
#define NUMBER_OF_ENEMIES_2 2
#define NUMBER_OF_ENEMIES_3 3
#define NUMBER_OF_ENEMIES2_1 1
#define NUMBER_OF_ENEMIES2_2 0
#define NUMBER_OF_ENEMIES2_3 2
#define MAX_ENEMY_NUMBER 10
#define ENEMY_RANGE 6






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////GAME CLASS/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Game {
private:
	//Is this the right way of default constructing an array member? Look for info
	static char levels[NUMBER_OF_LEVELS][LEVEL_HEIGHT][LEVEL_WIDTH];
	static int levelsXp[NUMBER_OF_LEVELS];//Get //Set
	static int levelStartingCoords[NUMBER_OF_LEVELS][2];//Get //Set
	static float myColours[12];
	static float wallColours[12];
	static float portalColours[12];
	static float portalIcon[9];
	Enemy enemies[NUMBER_OF_LEVELS][MAX_ENEMY_NUMBER];
	Enemy2 enemies2[NUMBER_OF_LEVELS][MAX_ENEMY_NUMBER];
	int currentLevel;//Get //Set //Increase

public:
	stack<Weapon> Weapons;
	Game();
	//Getters

	char GetLevels(int levelIndex, int levelHeight, int levelWidth);

	int GetLevelsXp(int levelIndex);

	int GetLevelStartingCoordX(int levelIndex);
	int GetLevelStartingCoordY(int levelIndex);


	int GetCurrentLevel();



	//Setters

	void SetLevels(int levelIndex, int levelHeight, int levelWidth, char newChar);

	void SetLevelsXp(int levelIndex, int newLevelXp);

	void SetLevelStartingCoordX(int levelIndex, int newX);
	void SetLevelStartingCoordY(int levelIndex, int newY);


	void SetCurrentLevel(int newCurrentLevel);

	//Other mutators
	//Basically change values inside the array before re-printing it to display correct position of the player
	void MoveUp(Player &thePlayer);
	void MoveDown(Player &thePlayer);
	void MoveLeft(Player &thePlayer);
	void MoveRight(Player &thePlayer);
	//Enemy movement
	void EMovement(Player &thePlayer, Enemy &theEnemy);
	void EMoveLeft(Enemy &theEnemy);
	void EMoveRight(Enemy &theEnemy);
	void EMoveUp(Enemy &theEnemy);
	void EMoveDown(Enemy &theEnemy);
	//Enemy movement overloaded
	void EMovement(Player &thePlayer, Enemy2 &theEnemy2);
	void EMoveLeft(Enemy2 &theEnemy2);
	void EMoveRight(Enemy2 &theEnemy2);
	void EMoveUp(Enemy2 &theEnemy2);
	void EMoveDown(Enemy2 &theEnemy2);
	void IncreaseCurrentLevel();
	//Identify level , player position and print both (Levels are held on a 3d array and are all 5 by 5)
	void CheckArray();
	//Draw settings used in CheckArray()
	void DrawPlayerSettings();
	void DrawEnemy1Settings();
	void DrawEnemy2Settings();
	void DrawWallSettings();
	void DrawPortalSettings();
	//Run movement script on activated enemy instances in the level
	void RunEnemiesMovement(Player &thePlayer);
	//Set starting x and y for player adn for enemies
	void SetStartingCoords(Player &thePlayer);
	//Attack between player and enemy
	void EngageAttack(Player &thePlayer, char myAnswer);
	void FindEnemiesAbove(Player &thePlayer);
	void FindEnemiesBelow(Player &thePlayer);
	void FindEnemiesLeft(Player &thePlayer);
	void FindEnemiesRight(Player &thePlayer);
	//Refresh enemy turns (run at the start of each turn in the level)
	void NewEnemyTurn();
	//Check if enemy is still alive ; If dead , deactivate it and give XP to the player
	void CheckEnemyHealth(Player &thePlayer, Enemy &theEnemy);
	//Check if player is dead
	void CheckPlayerHealth(Player &thePlayer);
	//Deal damage between player and enemy object
	void DealDamage(Player &thePlayer, Enemy &theEnemy);
	//Overload function for enemy2s
	void DealDamage(Player &thePlayer, Enemy2 &theEnemy2);
	//Health substraction functions
	void PlayerAttacksEnemy(Player &thePlayer, Enemy &theEnemy);
	void PlayerAttacksEnemy(Player &thePlayer, Enemy2 &theEnemy2);
	void EnemyAttacksPlayer(Player &thePlayer, Enemy &theEnemy);
	void EnemyAttacksPlayer(Player &thePlayer, Enemy2 &theEnemy2);
};

