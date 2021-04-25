#include <iostream>
#include "headers/chip_8.hpp"

using namespace std;

Chip8 myChip8;

unsigned short opcode;
unsigned char memory[4096];
unsigned char V[16];
unsigned short I;
unsigned short pc;
unsigned char gfx[64*32];

unsigned char delay_timer;
unsigned char sound_timer;

unsigned short stack[16];
unsigned short sp;

unsigned char key[16];

int main() {
    //set up graphics
    //set up inputs
    myChip8.initialize();
    myChip8.loadGame("pong");

    for (;;) {
        myChip8.emulateCycle();
    }
    return 0;
}