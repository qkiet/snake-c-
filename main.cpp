#include "snake.hpp"

const int ROOM_SIZE_VERTICAL   = 30;
const int ROOM_SIZE_HORIZONTAL = 20;

int main()
{
	Room *play_room = new Room(ROOM_SIZE_VERTICAL, ROOM_SIZE_HORIZONTAL);
	play_room->printRoom();
	delete play_room;
}
