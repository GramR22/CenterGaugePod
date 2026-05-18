#include <iostream>
#include <cstdint>
#include "parser/parser.h"
#include "can_values.h"
#include "can_frame.h"
#include "foo_can/broadcaster.h"
using namespace std;


int main(){
    message frame = {};
    can_vals values = {};
    broadcast();
    parse(values, frame);
    cout << values.oil_pres << endl;
    cout << values.afr << endl;
    return 0;


}