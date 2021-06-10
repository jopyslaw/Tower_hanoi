#ifndef functions
#define functions
#include <iostream>
#include "Stack_plate.h"

///Funkcja typu int
///
///Służy do pobrania wartości która oznaczy ile talerzy ma zostać wygenerowanych
///@return zwraca wartość ile talerzy ma zostać wygenerowanych
int get_size();
///Funkcja typu void
///
///Służy do stowrzenia menu gry
///@param s1 referencja do obiektu typu Stack_plate
///@param s2 referencja do obiektu typu Stack_plate
///@param s3 referencja do obiektu typu Stack_plate
void main_menu(Stack_plate &s1, Stack_plate &s2, Stack_plate &s3);
///Funkcja typu void
///
///Służy do wygenerowania wygranej gry
///@param s3 referencja do obiektu typu Stack_plate
///@param move zmienna która przechowuje ile ruchów zostało już wykonanych
void win_game(Stack_plate &s3);

#endif