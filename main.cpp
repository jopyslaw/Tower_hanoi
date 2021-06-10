#include <iostream>
#include "Stack_plate.h"
#include "additional_functions.h"
using namespace std;

int main()
{
    int rozmiar = get_size();
    bool win = false;
    Stack_plate s1(rozmiar),s2(rozmiar),s3(rozmiar);
    s1.generate_plate();
    while(win == false)
    {
        main_menu(s1,s2,s3);
        win = s3.end_game();
    }
    win_game(s3);
    return 0;
}