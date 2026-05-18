#include "parser.h"

void parse(can_vals& val , message msg){
    val.boost = msg.data[5] * 0.1450377;
    val.oil_tmp = ((msg.data[7] - 60) * 9 / 5) + 32;
    val.oil_pres = 60.00;
    val.afr = 11.5;
}
