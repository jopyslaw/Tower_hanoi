#include <iostream>
#include "stos.h"
#include "talerz.h"

class Stack_plate: public stos<Plate>, public Plate
{
    public:
    Stack_plate();
    Stack_plate(int size);
    ~Stack_plate();
    bool check_is_end();
    void generate_plates();
    private:
};