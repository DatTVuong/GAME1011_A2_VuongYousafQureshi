//Dat Vuong & Mustafa Qureshi

#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
#include "gameWorld.h"
#include "Room.h"
#include "Item.h"
using namespace std;

int processCommands();
void commandHelp();
void movingLine();
void advance();

int main()
{
	string command;				// This will hold the command the user wants to carry out
	string temp, temp2;			// These will be used to load the data from the .txt files into the items and rooms respectively
	bool continueGame = false;	// This will control whether the player can advance after the commands

	Item* items;				// This will hold all of the items found in game
	int numItems = 0;			// This will keep track of the number of items
	
	gameWorld roomHandler;		// This controls, and holds the rooms found in the game
	ifstream fileReader;		// This will read in the data from the item and 

	items = new Item[5];		// 

	// This will load the information for the items from the Item.txt file
	fileReader.open("Items.txt");
	if (fileReader.is_open()) {
		for (int x = 0; getline(fileReader, temp2); x++) {
			if (x % 2 == 0) 
				temp = temp2; // This stores the name of the item so it could be used to create the item later
			else {
				items[numItems] = Item(temp, temp2); // This uses both temp strings to create and store the items in the array
				numItems++;
			}
		}		
		fileReader.close();
	}
	else {
		cout << "Items.txt could not be found" << endl;
		exit(1);
	}
	
	// This will load the information for the items from the Item.txt file
	fileReader.open("Rooms.txt");
	if (fileReader.is_open()) {
		for (int x = 0; getline(fileReader, temp2); x++) {
			if (x % 2 == 0)
				temp = temp2;
			else 
				roomHandler.addRoom(new Room(temp, temp2)); 
		}
		fileReader.close();
	}
	else {
		cout << "Rooms.txt could not be found" << endl;
		exit(1);
	}
	
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "   __, _______         _______ ,__        " << endl;
	cout << "  / __. ==---/ "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "*"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << " THE "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "*"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << " \\---== .__  \\    " << endl;
	cout << " / #(-'        "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << " YOUSAF"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "	       '-)# \\     " << endl;
	cout << " `-'           "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << " FAMILY"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "	          `-'      " << endl << endl;

	//Please add the welcoming message for the game here
	cout << "Welcome to THE YOUSAF FAMILY" << endl;
	advance();

	commandHelp();
	advance();
	
	// This is where the main gameplay loop will

//------------------------First Room------------------------------//
	cout << roomHandler.getFirstRoom()->getOpening() << endl << endl;

	cout << "Enter:   Sit - Listen to Mr. Cannoli and sit down " << endl;
	cout << "       Stand - Stay standing up" << endl;

	while() {
		if ()
	}








	
	delete[] items;
	return 0;
}
// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);

int processCommands() {
	
}

// This is to format the help screen
void commandHelp () {
	movingLine();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "________________________________________________" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "look around"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Inspects current room    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "look around"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Inspects current room    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "look around"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Inspects current room    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "grab (item)"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Pick up item             "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "look around"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Inspects current room    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "grab (item)"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Pick up item             "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "look around"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Inspects current room    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "grab (item)"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Pick up item             "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "use (item) "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Use item in situation    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "look around"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Inspects current room    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "grab (item)"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Pick up item             "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "use (item) "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Use item in situation    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "look around"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Inspects current room    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "grab (item)"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Pick up item             "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "use (item) "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Use item in situation    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "check inventory "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "View items in your       "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	movingLine();
	cout << "________________________________________________ " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||                  "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "Commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "                  ||" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "help"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "            | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Displays list of commands"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "look around"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Inspects current room    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "grab (item)"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Pick up item             "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "use (item) "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "     | "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "Use item in situation    "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "||--------------------------------------------|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << "check inventory "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "| "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN); cout << "View items in your       "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << "|| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "|----------------------------------------------| " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
}


// Functions used to format the console
void movingLine() {
	Sleep(50);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	Sleep(50);
	system("CLS");
}

void advance() {
	cout << "Press enter to continue" << endl;
	getchar();
	system("CLS");
}