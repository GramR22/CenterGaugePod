#ifndef CAN_FRAME_H
#define CAN_FRAME_H
#include <cstdint>

struct message {
        uint32_t ID;
        uint8_t data[8];
    };


#endif