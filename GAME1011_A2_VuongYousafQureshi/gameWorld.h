#pragma once
#ifndef __GAMEWORLD_H__
#define __GAMEWORLD_H__

#include <iostream>
#include <string>
#include <vector>
#include "Room.h"

class gameWorld
{
private:
	Room** roomArray;
	int roomCapacity;
	int numOfRooms;
	int front;
	int rear;

public: 
	gameWorld();
	~gameWorld() { delete[] roomArray; }

	void addRoom(Room* newRoom);
	void removeFrontRoom();

	// Getters
	int getFront() const { return front; }
	int getRear() const { return rear; }
 };

#endif