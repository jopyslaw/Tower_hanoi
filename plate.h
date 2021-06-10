#ifndef plate
#define plate
#include <iostream>


///Klasa Plate
///
///Opisuje talerz który znajduje sie na wieży hanoi
class Plate
{
    public:
    ///Konstruktor
    ///
    ///Tworzy obiekt klasy Plate
    Plate();
    ///Konstruktor jednoargumetnowy
    ///
    ///Tworzy obiekt klasy Plate z zadaną wartościa
    ///@param size wartosć jaka zostanie użyta do wygenerowania obiektu plate
    Plate(int size);
    ///Funkcja typu void
    ///
    ///Służy do zmiany wartości parametru plate_diameter na inną podaną
    ///@param value wartość jaka zostanie użyta do zastąpienia poprzedniej
    void set_diameter(int value);
    ///Funkcja typu int 
    ///
    ///Zwraca wartość srednicy danego talerza
    ///@return średnica danego talerza
    int diameter();
    private:
    int plate_diameter; ///< zmienna która przechowuje średnicę talerza
};

#endif