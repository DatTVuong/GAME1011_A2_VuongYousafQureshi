#include "Room.h"

Room::Room(std::string opening, std::string des) {

	this->openingMessage = opening;
	this->description = des;
	this->moveOn = false; 
}

Room::~Room() {
	items.clear();
	items.shrink_to_fit();
}

// this will search through all of the items in the room and once it finds the item whose name matches the
// one it's looking for it will remove it
void Room::removeItem(std::string name) {
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->getName().compare(name))
		{
			delete items[i];
			items[i] = nullptr;
			items.erase(items.begin() + i);
			items.shrink_to_fit();
		}
	}
}