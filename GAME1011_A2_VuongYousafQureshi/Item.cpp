#include "Item.h"
// the name and description for the items and the rooms will be read in from a file straight into the con

Item::Item(std::string _name, std::string _description) {
	this->name = _name;
	this->description = _description;
	inInventory = false;
}