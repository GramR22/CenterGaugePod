#include "broadcaster.h"
using namespace std;

message broadcast() {
    message frame = {};
    frame.ID = 0xF8;
    frame.data[5] = 0x96;
    frame.data[7] = 0x96;
    return frame;
}