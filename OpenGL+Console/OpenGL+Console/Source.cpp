
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// CT4TOGA OpenGL without using GLUT - uses excerpts from here:
// http://bobobobo.wordpress.com/2008/02/11/opengl-in-a-proper-windows-app-no-glut/
// Feel free to adapt this for what you need, but please leave these comments in.

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#pragma once
#include "stdafx.h"
#include "myAttributes.h"
#include "myEnemy.h"
#include "myEnemy2.h"
#include "myPlayer.h"
#include "myGame.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>
#include <iostream>
using namespace std;

#include <windows.h>	// need this file if you want to create windows etc
#include <gl/gl.h>		// need this file to do graphics with opengl
#include <gl/glu.h>		// need this file to set up a perspective projection easily


// include the opengl and glu libraries
#pragma comment(lib, "opengl32.lib")	
#pragma comment(lib, "glu32.lib")

//Defines


#pragma region //Console functions

//KNOWN BUGS
/*
1: The way cin works , leaving buffer rests if not answered properly
2:Formalize
3: Fix circular dependencies
*/



//////////////////////////////////////////////CLASSES//////////////////////////////////////////////



/*
-Game class?
-Player class
-Attributes class
-Enemy class: How are they supposed to behave?: They move randomly if they are further away to the player than x distance , then if the player gets closes to them than
that distance they chase him until they lose him again. Once they are next to him they deal x damage?
-The way movement is handled is not optimal : The starting coords and the position of the player in the array maybe should be handled altogether somehow.
-Speed determines who attacks first? So if you attack first and kill enemy doesnt get to hit back
*/

//////////////////////////////////////////////METHODS//////////////////////////////////////////////

//Enemy class methods:
//Getters,Setters
//void CheckEnemy();

//Free(?) methods:
void EnterLevel(Player &thePlayer, Game &theGame);
//Passing by pointer
void WhatToDo(Player * thePlayerPointer, Game * theGamePointer);
void ReachPortal(Player &thePlayer, Game &theGame);
void EnterMarket(Player &thePlayer , Game &theGame);






//////////////////////////////////////////////METHODS//////////////////////////////////////////////

//Item market script
void EnterMarket(Player &thePlayer, Game &theGame) {
	cout << "-------------- This is town " << theGame.GetCurrentLevel() << "'s market ---------" << endl;
	cout << "---------------------------------------" << endl;
	cout << "-------------- You have " << thePlayer.GetCurrency() << " coins." << endl;
	cout << "-------------Choice 1 : Buy next weapon: " << theGame.Weapons.top().GetName() << 
		" Atk: " << theGame.Weapons.top().GetAttackMod() << " Spd: " << theGame.Weapons.top().GetSpeedMod() << endl;
	cout << "-------------Choice 2 : Back" << endl;
	cout << "---------------------------------------" << endl;
	string choice;
	cin >> choice;
	switch (choice.front()) {
	case '1': //Buy next weapon
	{
		//If player has money to buy it
		if (thePlayer.GetCurrency() >= theGame.Weapons.top().GetPrice()) {
			thePlayer.SetCurrency(thePlayer.GetCurrency() - theGame.Weapons.top().GetPrice());
			thePlayer.Weapons.push(theGame.Weapons.top());

			cout << "You adquire " << theGame.Weapons.top().GetName() << endl;
			cout << "You have " << thePlayer.GetCurrency() << " coins left." << endl;
			//Pop stack if its not empty already
			if (!theGame.Weapons.empty()) theGame.Weapons.pop();
		}
		else cout << "You don't have enough" << endl;
		////PASSING BY POINTER /////
		Player * pointerToPlayer = &thePlayer;
		Game * pointerToGame = &theGame;
		WhatToDo(pointerToPlayer, pointerToGame);
		break;
	}
	case '2': //Go back to main menu
	{
		Player * pointerToPlayer = &thePlayer;
		Game * pointerToGame = &theGame;
		WhatToDo(pointerToPlayer, pointerToGame);
		break;
	}
	default:
	{
		Player * pointerToPlayer = &thePlayer;
		Game * pointerToGame = &theGame;
		WhatToDo(pointerToPlayer, pointerToGame);
		break;
	}
	
	}

};
//Level gameplay script **NOT USED ANYMORE SINCE OPENGL**
/*void EnterLevel(Player &thePlayer, Game &theGame) {
	//Increase level
	theGame.IncreaseCurrentLevel();
	cout << "Move typing w,a,s or d and entering and rest by typing something else. Attack with e" << endl;
	cout << "You enter  forest " << theGame.GetCurrentLevel() << " on your way to the next town" << endl;
	string answer;
	bool onLevel = true;
	//Set starting coordinates for player
	theGame.SetStartingCoords(thePlayer);
	while (onLevel) {
		//Level loop
		//Refresh enemy turns
		theGame.NewEnemyTurn();
		//cout array
		theGame.CheckArray();

		cout << "Your coordinates are x: " << thePlayer.GetX() << " y: " << thePlayer.GetY() << endl;
		cout << "Whats your next move ?" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> answer;
		//Move code (Checks whether theres a wall on given position and moves accordingly and checks for portals)
		switch (answer.front()) {
			//Move up
		case 'w':
			//Portal check function
			if (theGame.GetLevels(theGame.GetCurrentLevel(), thePlayer.GetY() - 1, thePlayer.GetX()) == 'P') {
				onLevel = false;
				ReachPortal(thePlayer, theGame);
			}
			//Collision check and movement
			else theGame.MoveUp(thePlayer);
			break;
			//Move down
		case 's':
			//Portal check function
			if (theGame.GetLevels(theGame.GetCurrentLevel(), thePlayer.GetY() + 1, thePlayer.GetX()) == 'P') {
				onLevel = false;
				ReachPortal(thePlayer, theGame);
			}
			//Collision check and movement
			else theGame.MoveDown(thePlayer);
			break;
			//Move left
		case 'a':
			//Portal check function
			if (theGame.GetLevels(theGame.GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX() - 1) == 'P') {
				onLevel = false;
				ReachPortal(thePlayer, theGame);

			}
			//Collision check and movement
			else theGame.MoveLeft(thePlayer);
			break;
			//Move right
		case 'd':
			//Portal check function
			if (theGame.GetLevels(theGame.GetCurrentLevel(), thePlayer.GetY(), thePlayer.GetX() + 1) == 'P') {
				onLevel = false;
				ReachPortal(thePlayer, theGame);
			}
			//Collision check and movement
			else theGame.MoveRight(thePlayer);
			break;
		case 'e':
			//Attack command
			cout << "What direction do you want to attack?" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> answer;
			theGame.EngageAttack(thePlayer, answer.front());
			break;
		default:
			cout << "Wrong input!" << endl;
			break;
		}
		//After player has moved run enemy movement scripts
		theGame.RunEnemiesMovement(thePlayer);
	}
}*/
//Main menu/lobby script
void WhatToDo(Player * thePlayerPointer, Game * theGamePointer) {
	//Next step: Choose what to do
	cout << "-------------- This is town " << theGamePointer->GetCurrentLevel() << " ---------" << endl;
	cout << "---------------------------------------" << endl;
	cout << " Where do you want to go " << thePlayerPointer->GetName() << "?" << endl;
	cout << "-------------Choice 1 : Market" << endl;
	cout << "-------------Choice 2 : Go on adventure" << endl;
	cout << "-------------Choice 3 : Quit adventure" << endl;
	cout << "---------------------------------------" << endl;
	string choice;
	cin >> choice;
	switch (choice.front()) {
	case '1': //Go to market"
		cout << "You enter your town's market" << endl; //Buy items?Repair?
		EnterMarket(*thePlayerPointer, *theGamePointer);
		break;
	case '2': //Go on adventure
			  //Check if all levels have been beaten
		if (theGamePointer->GetCurrentLevel() < NUMBER_OF_LEVELS) {
			//Increase level
			theGamePointer->IncreaseCurrentLevel();
			cout << "Move typing w,a,s or d and entering and rest by typing something else. Attack with e" << endl;
			cout << "You enter  forest " << theGamePointer->GetCurrentLevel() << " on your way to the next town" << endl;
			//Set starting coordinates for player
			theGamePointer->SetStartingCoords(*thePlayerPointer);
		}
		else {
			cout << "Congratulations! You beat the game." << endl;
			exit(0);
		}

		break;
	case '3': //Quit game
		exit(0);
		break;
	default: //Otherwisee
		exit(0);
		break;
	}
	return;
}
//Add experience points , call CheckLevelUp and then call WhatToDo to go to next town's lobby
void ReachPortal(Player &thePlayer, Game &theGame) {
	cout << "Well done! You reach town " << theGame.GetCurrentLevel() << " and gain " << theGame.GetLevelsXp(theGame.GetCurrentLevel()) << " experience" << endl;
	thePlayer.SetCurrentXp(thePlayer.GetCurrentXp() + theGame.GetLevelsXp(theGame.GetCurrentLevel()));
	thePlayer.CheckLevelUp();
	////PASSING BY POINTER /////
	Player * pointerToPlayer = &thePlayer;
	Game * pointerToGame = &theGame;
	WhatToDo(pointerToPlayer, pointerToGame);
}

#pragma endregion





// add player class here...


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


// function prototypes:
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// In a C++ Windows app, the starting point is WinMain() rather than _tmain() or main().
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow)
{
	// some basic numbers to hold the position and size of the window
	int windowWidth = 800;
	int windowHeight = 600;
	int windowTopLeftX = 50;
	int windowTopLeftY = 50;

	// some other variables we need for our game...
	MSG msg;								// this will be used to store messages from the operating system
	bool keepPlaying = true;				// whether or not we want to keep playing



											// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
											// this section contains all the window initialisation code, 
											// and should probably be collapsed for the time being to avoid confusion	
#pragma region  <-- click the plus/minus sign to collapse/expand!

											// this bit creates a window class, basically a template for the window we will make later, so we can do more windows the same.
	WNDCLASS myWindowClass;
	myWindowClass.cbClsExtra = 0;											// no idea
	myWindowClass.cbWndExtra = 0;											// no idea
	myWindowClass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);	// background fill black
	myWindowClass.hCursor = LoadCursor(NULL, IDC_ARROW);					// arrow cursor       
	myWindowClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);				// type of icon to use (default app icon)
	myWindowClass.hInstance = hInstance;									// window instance name (given by the OS when the window is created)   
	myWindowClass.lpfnWndProc = WndProc;									// window callback function - this is our function below that is called whenever something happens
	myWindowClass.lpszClassName = TEXT("my window class name");				// our new window class name
	myWindowClass.lpszMenuName = 0;											// window menu name (0 = default menu?) 
	myWindowClass.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;				// redraw if the window is resized horizontally or vertically, allow different context for each window instance

																			// Register that class with the Windows OS..
	RegisterClass(&myWindowClass);

	// create a rect structure to hold the dimensions of our window
	RECT rect;
	SetRect(&rect, windowTopLeftX,				// the top-left corner x-coordinate
		windowTopLeftY,				// the top-left corner y-coordinate
		windowTopLeftX + windowWidth,		// far right
		windowTopLeftY + windowHeight);	// far left

										// adjust the window, no idea why.
	AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, false);

	// call CreateWindow to create the window
	HWND myWindow = CreateWindow(TEXT("my window class name"),		// window class to use - in this case the one we created a minute ago
		TEXT("CT4TOGA Week 19 Example"),		// window title
		WS_OVERLAPPEDWINDOW,						// ??
		windowTopLeftX, windowTopLeftY,			// x, y
		windowWidth, windowHeight,				// width and height
		NULL, NULL,								// ??
		hInstance, NULL);							// ??


													// check to see that the window created okay
	if (myWindow == NULL)
	{
		FatalAppExit(NULL, TEXT("CreateWindow() failed!")); // ch16
	}

	// if so, show it
	ShowWindow(myWindow, iCmdShow);


	// get a device context from the window
	HDC myDeviceContext = GetDC(myWindow);


	// we create a pixel format descriptor, to describe our desired pixel format. 
	// we set all of the fields to 0 before we do anything else
	// this is because PIXELFORMATDESCRIPTOR has loads of fields that we won't use
	PIXELFORMATDESCRIPTOR myPfd = { 0 };


	// now set only the fields of the pfd we care about:
	myPfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);		// size of the pfd in memory
	myPfd.nVersion = 1;									// always 1

	myPfd.dwFlags = PFD_SUPPORT_OPENGL |				// OpenGL support - not DirectDraw
		PFD_DOUBLEBUFFER |				// double buffering support
		PFD_DRAW_TO_WINDOW;					// draw to the app window, not to a bitmap image

	myPfd.iPixelType = PFD_TYPE_RGBA;					// red, green, blue, alpha for each pixel
	myPfd.cColorBits = 24;								// 24 bit == 8 bits for red, 8 for green, 8 for blue.
														// This count of color bits EXCLUDES alpha.

	myPfd.cDepthBits = 32;								// 32 bits to measure pixel depth.


														// now we need to choose the closest pixel format to the one we wanted...	
	int chosenPixelFormat = ChoosePixelFormat(myDeviceContext, &myPfd);

	// if windows didnt have a suitable format, 0 would have been returned...
	if (chosenPixelFormat == 0)
	{
		FatalAppExit(NULL, TEXT("ChoosePixelFormat() failed!"));
	}

	// if we get this far it means we've got a valid pixel format
	// so now we need to set the device context up with that format...
	int result = SetPixelFormat(myDeviceContext, chosenPixelFormat, &myPfd);

	// if it failed...
	if (result == NULL)
	{
		FatalAppExit(NULL, TEXT("SetPixelFormat() failed!"));
	}

	// we now need to set up a render context (for opengl) that is compatible with the device context (from windows)...
	HGLRC myRenderContext = wglCreateContext(myDeviceContext);

	// then we connect the two together
	wglMakeCurrent(myDeviceContext, myRenderContext);



	// opengl display setup
	glMatrixMode(GL_PROJECTION);	// select the projection matrix, i.e. the one that controls the "camera"
	glLoadIdentity();				// reset it
	gluPerspective(45.0, (float)windowWidth / (float)windowHeight, 0.1, 1000);	// set up fov, and near / far clipping planes
	glViewport(0, 0, windowWidth, windowHeight);								// make the viewport cover the whole window
	glClearColor(0.5, 0, 0, 1.0);												// set the colour used for clearing the screen
	glEnableClientState(GL_VERTEX_ARRAY);										//	turn on the ability to do vertex arrays
	glEnableClientState(GL_COLOR_ARRAY);										// turn on the ability to do colour arrays
	glMatrixMode(GL_MODELVIEW);													// select the modelview matrix, i.e. the one that controls how local space is mapped to world space


																				// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#pragma endregion
													
	srand(time(NULL));															// Initialize random seed(Used in enemy movement)
	Game game1;																	// spawn game
	Player player1;																// spawn some players here...
	Game *pointerToGame = &game1;												//Pointer to game
	Player *pointerToPlayer = &player1;											//Pointer to player
	AllocConsole();																//Allocate the console
	FILE* pCout; //for COUT to work 
	FILE* pCin;  //for CIN to work 
	FILE* pCerr; //for CERR to work 
	freopen_s(&pCin, "CONIN$", "r", stdin); 
	freopen_s(&pCout, "CONOUT$", "w", stdout); 
	freopen_s(&pCerr, "CONOUT$", "w", stderr);
	cout << "Hello. This is a text/OpenGL based game , enter your name" << endl;
	string answer;
	cin >> answer;
	pointerToPlayer->SetName(answer);											//Use pointer to set player data
	pointerToPlayer->SkillUp();
	//PASSING BY POINTER
	WhatToDo(pointerToPlayer, pointerToGame);
	
	// main game loop starts here!
	// keep doing this as long as the player hasnt exited the app: 
	while (keepPlaying == true)
	{

		// we need to listen out for OS messages.
		// if there is a windows message to process...
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			// and if the message is a "quit" message...
			if (msg.message == WM_QUIT)
			{
				keepPlaying = false;	// we want to quit asap
			}
			///INPUTS///
			else if (msg.message == WM_KEYDOWN) {
				//Key has been pressed
				if (msg.wParam == 65) { 
					// they have pressed 'A' 
					if (!player1.GetOnAttackStance()) {
						//Move left 
						//Portal check function
						if (game1.GetLevels(game1.GetCurrentLevel(), player1.GetY(), player1.GetX() - 1) == 'P') {
							
							ReachPortal(player1, game1);

						}
						//Collision check and movement
						else {
							game1.MoveLeft(player1);
							game1.RunEnemiesMovement(player1);
						}
					}
					else {
						//Attack left
						game1.EngageAttack(player1, 'a');
						game1.RunEnemiesMovement(player1);
						player1.SetOnAttackStance(false);
					}
				}  
				else if (msg.wParam == 68) {
					//they have pressed 'D'
					if (!player1.GetOnAttackStance()) {
						//Move left 
						//Portal check function
						if (game1.GetLevels(game1.GetCurrentLevel(), player1.GetY(), player1.GetX() + 1) == 'P') {

							ReachPortal(player1, game1);

						}
						//Collision check and movement
						else {
							game1.MoveRight(player1);
							game1.RunEnemiesMovement(player1);
						}
					}
					else {
						//Attack right
						game1.EngageAttack(player1, 'd');
						game1.RunEnemiesMovement(player1);
						player1.SetOnAttackStance(false);
					}
				}
				else if (msg.wParam == 83) {
					//They have pressed 'S'
					if (!player1.GetOnAttackStance()) {
						//Move left 
						//Portal check function
						if (game1.GetLevels(game1.GetCurrentLevel(), player1.GetY() + 1, player1.GetX()) == 'P') {

							ReachPortal(player1, game1);

						}
						//Collision check and movement
						else {
							game1.MoveDown(player1);
							game1.RunEnemiesMovement(player1);
						}
					}
					else {
						//Attack down
						game1.EngageAttack(player1, 's');
						game1.RunEnemiesMovement(player1);
						player1.SetOnAttackStance(false);
					}
				}
				else if (msg.wParam == 87) {
					//they have pressed 'W'
					if (!player1.GetOnAttackStance()) {
						//Move left 
						//Portal check function
						if (game1.GetLevels(game1.GetCurrentLevel(), player1.GetY() - 1, player1.GetX()) == 'P') {

							ReachPortal(player1, game1);

						}
						//Collision check and movement
						else {
							game1.MoveUp(player1);
							game1.RunEnemiesMovement(player1);
						}
					}
					else {
						//Attack up
						game1.EngageAttack(player1, 'w');
						game1.RunEnemiesMovement(player1);
						player1.SetOnAttackStance(false);
					}
				}
				else if (msg.wParam == 69) {
					//they have pressed 'E' (Command to attack)
					if (!player1.GetOnAttackStance()) {
						player1.SetOnAttackStance(true);
					}
					else {
						//If they pressed it twice skip a turn
						game1.RunEnemiesMovement(player1);
						player1.SetOnAttackStance(false);
					}
				}
			} 
			// or if it was any other type of message (i.e. one we don't care about), process it as normal...
			else
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}


		// draw code:
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);		// clear screen
		glVertexPointer(3, GL_FLOAT, 0, player1.icon);			//wip

		// insert your update code here...
		//Level loop
		//Function that prints on screen
		game1.CheckArray();





		SwapBuffers(myDeviceContext);							// update graphics
		
		//Refresh enemy turns
		game1.NewEnemyTurn();

	}


	// the next bit will therefore happen when the player quits the app,
	// because they are trapped in the previous section as long as (keepPlaying == true).

	// UNmake our rendering context (make it 'uncurrent')
	wglMakeCurrent(NULL, NULL);

	// delete the rendering context, we no longer need it.
	wglDeleteContext(myRenderContext);

	// release our window's DC from the window
	ReleaseDC(myWindow, myDeviceContext);

	// end the program
	return msg.wParam;
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// this part contains some code that should be collapsed for now too...
#pragma region keep_this_bit_collapsed_too!

// this function is called when any events happen to our window
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
{

	switch (message)
	{
		// if they exited the window...	
	case WM_DESTROY:
		// post a message "quit" message to the main windows loop
		PostQuitMessage(0);
		return 0;
		break;
	}

	// must do this as a default case (i.e. if no other event was handled)...
	return DefWindowProc(hwnd, message, wparam, lparam);

}

#pragma endregion
