#include "Stack_plate.h"

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
    tab = new Plate [size];
}

Stack_plate::~Stack_plate()
{
    delete [] tab;
}

void Stack_plate::generate_plate()
{
    int gen = len;
    for(int i=0; i<len; i++)
    {
        tab[i].set_diameter(gen);
        gen--;
        top++;
    }
}


std::ostream & operator <<(std::ostream &o, Stack_plate &s1)
{
    for(int i=s1.top; i>=0;i--)
    {
        o << s1.tab[i].diameter() << std::endl;
    }
    return o;
}


void Stack_plate::move_plate(Stack_plate &s)
{
    if(is_empty())
    {
        std::cout << "Wieza z ktorej chcesz pobrac element jest pusta" << std::endl;
        return;
    }
    else if(s.is_empty())
    {
        Plate temp;
        temp = pop();
        s.push(temp);
        return;
    }
    else
    {
        int size_1 = top_element().diameter();
        int size_2 = s.top_element().diameter();
        std::cout << size_2;
        if(size_1 > size_2)
        {
            std::cout << "Wiekszy talerz nie moze byc na mniejszym" << std::endl;
        }
        else
        {
            Plate temp;
            temp = pop();
            s.push(temp);
        }
        return;
    }
    
}

bool Stack_plate::end_game()
{
    if(top == len-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


