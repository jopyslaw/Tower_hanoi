#include <iostream>

class Plate
{
    public:
    Plate();
    Plate(int size);
    ~Plate();
    int diameter();
    private:
    int plate_diam;
};