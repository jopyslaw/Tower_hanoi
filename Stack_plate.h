#ifndef stack_plate
#define stack_plate
#include "plate.h"
#include "stack.h"

///Klasa Stack_plate
///
///Opisuje klasę Stack_plate która dziedziczy po szablonie klasy Stack i klasie Plate
class Stack_plate: public Stack<Plate>
{
    ///Zaprzyjaźniony przeładowany operator <<
    ///
    ///Odpowiada za wypisywanie wartości ze sotsu
    friend std::ostream & operator <<(std::ostream &o, Stack_plate &s1);
    public:
    ///Konstruktor domyślny
    ///
    ///Odpowiada za stworzenie obiektu klasy Stack_plate z domyślnymi wartościami
    Stack_plate();
    ///Konstruktor jednoargumentowy
    ///
    ///Odpowiada za stworzenie obiektu klasy Stack_plate z zadaną wartością
    ///@param size parametr który przechowuje długosć nowej tablicy
    Stack_plate(int size);
    ///Destruktor
    ///
    ///Słuzy do zniszczenia obiektu gdy już nie będzie używany
    ~Stack_plate();
    ///Funkcja typu void
    ///
    ///Odpowiada za wygenerowanie talerzy na wieży hanoi
    void generate_plate();
    ///Funkcja typu void
    ///
    ///Służy do przemieszczania talerzy między wieżami
    ///@param s jest to referencja do obiketu typu Stack_plate
    void move_plate(Stack_plate &s);
    ///Funkcja typu bool
    ///
    ///Sprawdza czy gra została zakończona
    ///@return zwraca True jeśli 3 wieża została ułożona i False jeśli nie 
    bool end_game();
};

#endif