#include <iostream>
#include <cstdint>
#include "can_frame.h"
using namespace std;

int main(int argc, char* argv[]) {
    message frame = {};
    frame.ID = 0xF8;
    frame.data[5] = 0x96;
    frame.data[7] = 0x96;
    cout << frame.ID << endl;
    cout << (int)frame.data[5] << endl;
    cout << (int)frame.data[7] << endl; 
    return 0;
}