#include "gameWorld.h"

gameWorld::gameWorld() {
	this->roomCapacity = 3;
	roomArray = new Room*[this->roomCapacity];

	front = rear = -1;
	numOfRooms = 0;
}

// This will add a room pointer to the array
void gameWorld::addRoom(Room* newRoom) {

	rear = (rear + 1) % roomCapacity;
	roomArray[rear] = newRoom;
	numOfRooms++;
}

void gameWorld::removeFrontRoom() {
	front = (front + 1) % roomCapacity;
	numOfRooms--;
}