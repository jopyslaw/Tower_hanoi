#include "plate.h"

Plate::Plate()
{
    plate_diameter = 0;
}

Plate::Plate(int size)
{
    plate_diameter = size;
}

int Plate::diameter()
{
    return plate_diameter;
}

void Plate::set_diameter(int value)
{
    plate_diameter = value;
}