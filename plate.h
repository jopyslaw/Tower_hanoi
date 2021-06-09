#ifndef plate
#define plate
#include <iostream>

class Plate
{
    public:
    Plate();
    Plate(int size);
    void set_diameter(int value);
    int diameter();
    private:
    int plate_diameter;
};

#endif