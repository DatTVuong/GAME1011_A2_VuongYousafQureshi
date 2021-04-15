#pragma once
#ifndef __ITEM_H__
#define __ITEM_H__

#include <string>

class Item
{
private:
	bool inInventory;
	
	std::string name;
	std::string description;
public:
	Item() = default;
	Item(std::string _name, std::string _description);

	void changeInventory() { inInventory = true; }
	
	// Getters
	bool getInInventory() const { return inInventory; }
	std::string getName() { return name; }
	std::string getDescription() const { return description; }
};

#endif