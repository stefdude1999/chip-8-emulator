#include <iostream>
#include <string.h>
using namespace std;

class Chip8{
public:
    void initialize();
    void emulateCycle();
    void loadGame(string input);
private:
};