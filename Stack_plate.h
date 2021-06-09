#ifndef stack_plate
#define stack_plate
#include "plate.h"
#include "stack.h"


class Stack_plate: public Stack<Plate>
{
    friend std::ostream & operator <<(std::ostream &o, Stack_plate &s1);//+
    public:
    Stack_plate();//+
    Stack_plate(int size);//+
    ~Stack_plate();//+
    void generate_plate();//+
    void move_plate(Stack_plate &s);
    bool end_game();
    int move();
};

#endif