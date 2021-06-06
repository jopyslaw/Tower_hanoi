#include "talerz.h"

Plate::Plate()
{
    plate_diam = 0;
}

Plate::Plate(int size)
{
    plate_diam = size;
}

int Plate::diameter()
{
    return plate_diam;
}