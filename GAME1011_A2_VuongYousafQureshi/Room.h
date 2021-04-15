#pragma once
#ifndef __ROOM_H__
#define __ROOM_H__

#include <iostream>
#include <vector>

#include "Item.h"

class Room
{
private:
	std::string openingMessage;
	std::string description;
	std::vector<Item*> items;
	bool moveOn; 
	
public:
	Room() = default;	// Default constructor
	Room(std::string _opening, std::string _des);
	~Room();

	void removeItem(std::string _name);
	void addItem(Item* _newItem){ items.push_back(_newItem); }

	void advance() { moveOn = true; }
	
	// Getters
	bool getMoveOn() const { return moveOn; }
	std::string getOpening() const { return openingMessage; }
	std::string getDescription() const { return description;}
};


#endif