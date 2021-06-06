#include "stos_talerzy.h"

Stack_plate::Stack_plate()
{
    len = 10;
    top = -1;
    tab = new Plate [len];
}

Stack_plate::Stack_plate(int size)
{
    len = size;
    top = -1;
    tab = new Plate [len];
}

Stack_plate::~Stack_plate()
{
    delete [] tab;
}


void Stack_plate::generate_plates()
{
    for(int i=
}
