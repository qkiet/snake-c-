#ifndef _SNAKE_HPP_
#define _SNAKE_HPP_
#include <queue>

enum Direction {up, down, left, right};

const int START_SNAKE_SIZE = 3;
const char CORNER_CHAR = '+';
const char VERTICAL_BOUNDARY_CHAR = '=';
const char HORIZONTAL_BOUNDARY_CHAR = '|';

struct Segment
{
	// Veritical position
	int start_x;
	// Horizontal position
	int start_y;
	// Length of segment
	int seg_length;
	// Direction of segment
	Direction seg_dir;

};


class Snake
{
public:
	// Segments of snake that make up the state of the snake
	// Begin of queue is actually the tail segment of the snake
	// End of queue is actually the head segment of the snake
	std::queue<Segment> snake_segs;
	
	// change direction of the snake if user input something
	// Return 0 if snake is still alive
	// Return -1 if snake is dead
	int change_dir(Direction input_dir);
	
	// update snake state
	// Return 0 if snake is still alive
	// Return -1 if snake is dead
	int update_state();
};

class Room
{
	char** room_state;
	float delay_interval;
	int size_vertical;
	int size_horizontal;
	Snake play_snake;
public:
	Room(int vert, int hori);
	
	void printRoom();
};


#endif
