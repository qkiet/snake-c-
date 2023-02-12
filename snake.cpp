#include "snake.hpp"
#include <iostream>
#include <cstdlib>

static int helper_random(int start, int end)
{
    return std::rand() % (end-start + 1) + start;
}

Room::Room(int vert, int hori)
{
    Snake &init_snake = this->play_snake;
    Segment first_seg;
    this->size_vertical = vert;
    this->size_horizontal = hori;
    room_state = new char*[hori];
    for (int row = 0; row < hori; row++) {
 
        // Declare a memory block
        // of size n and init
        room_state[row] = new char[vert];

    }

    // Init boundary
    // Up and below boundary
    room_state[0][0] = CORNER_CHAR;
    room_state
    for (int column = 0; column < this->size_vertical; column++)
    {

    }
    
    // Create snake of the room
    first_seg.seg_dir = left;
    first_seg.start_x = vert / 2;
    first_seg.start_y = hori / 2;
    first_seg.seg_length = START_SNAKE_SIZE;
    init_snake.snake_segs.push(first_seg);
}
void Room::printRoom()
{
    // Print upper boundary
    for (int i = 0; i < this->size_vertical+2; i++)
        std::cout << "*";
    std::cout << std::endl;

    // Print side boundary
    for (int i = 0; i < this->size_horizontal; i++)
    {
        std::cout << "*";
        for (int j = 0; j < this->size_vertical; j++)
            std::cout << " ";
        std::cout << "*" << std::endl;
    }
    // Print below boundary
    for (int i = 0; i < this->size_vertical+2; i++)
        std::cout << "*";
    std::cout << std::endl;
        
}