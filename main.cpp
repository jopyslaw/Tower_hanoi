#include <iostream>
#include "Stack_plate.h"
#include <cstdlib>
using namespace std;

int get_size()
{
    int size = 0;
    while(size <= 0)
    {
        cout << "Podaj liczbe talerzy(nie moze by mniejsza badz rowna zeru): ";
        cin >> size;
    }
    return size;
}

void main_menu(Stack_plate &s1, Stack_plate &s2, Stack_plate &s3)
{
    int index_1, index_2;
    cout << "==========================" << endl;
    cout << "        Wieze Hanoi" << endl; // wyswietla sie od iteracji naprawic bug
    cout << "==========================" << endl;
    cout << "========" << endl;
    cout << "   1" << endl;
    cout << "========" << endl;
    cout << s1 << endl;
    cout << "========" << endl;
    cout << "   2" << endl;
    cout << "========" << endl;
    cout << s2 << endl;
    cout << "========" << endl;
    cout << "   3" << endl;
    cout << "========" << endl;
    cout << s3 << endl;
    cout << "Podaj numer wiezy z ktorej chcesz wziasc element: ";
    cin >> index_1;
    cout << "Podaj numer wiezy na ktora chcesz przeniesc element: ";
    cin >> index_2;
    switch (index_1)
    {
    case 1:
        if(index_2==2)
        {
            s1.move_plate(s2);
        }
        else if(index_2==3)
        {
            s1.move_plate(s3);
        }
        else
        {
            cout << "Podana liczba musi byc inna od wszesnieszej wybraniej i nie przekraczac 3" << endl;
        }
        break;
    case 2:
        if(index_2==1)
        {
            s2.move_plate(s1);
        }
        else if(index_2==3)
        {
            s2.move_plate(s3);
        }
        else
        {
            cout << "Podana liczba musi byc inna od wszesnieszej wybraniej i nie przekraczac 3" << endl;
        }
        break;
    case 3:
        if(index_2==2)
        {
            s3.move_plate(s2);
        }
        else if(index_2==1)
        {
            s3.move_plate(s1);
        }
        else
        {
            cout << "Podana liczba musi byc inna od wszesnieszej wybraniej i nie przekraczac 3" << endl;
        }
        break;
    default:
        cout << "Nie ma takiej wiezy" << endl;
        break;
    }
    system("cls");
}

void win_game(Stack_plate &s3)
{
    cout << "Brawo udalo ci sie wygrac gre" << endl;
    cout << "Tak wygląda ulozona wieza: " << endl;
    cout << s3;
}


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