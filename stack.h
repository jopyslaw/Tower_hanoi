#ifndef stack
#define stack

///Klasa Info
///
///Opisuje klasę Info która odpowiada za przehcowywanie błędów
class Info
{
    public:
    int err;///< zmienna która przechowuje wartość błędu
};
///Szablon klasy Stack
/// 
///Opisuje klasę Stack
template <class T> class Stack
{
    public:
    ///Konstruktor domyślny
    ///
    ///Służy do utworzenia obiektu Stack z domyślnymi wartościami
    Stack();
    ///Konstruktor jednoargumentowy
    ///
    ///Służy do utworzenia obiektu Stack o zadanej wielkości
    ///@param size parametr który określa z jaką wielkością ma powstać klasa Stack
    Stack(int size);
    ///Destruktor
    ///
    ///Służy do zniszczenia obiektu gdy już nie będzie potrzebny
    ~Stack();
    ///Funkcja typu void
    ///
    ///Służy do dodawania obiektu na stos
    ///@param c element który ma zostać dodany
    void push(T c);
    ///Funkcja typu T
    ///
    ///Służy do usuwania obiektu ze stosu
    ///@return zwraca usunięty obiekt
    T pop();
    ///Funkcja typy T
    ///
    ///@return zwraca wartość ze szczytu stosu
    T top_element();
    ///Funkcja typu bool
    ///
    ///Sprawdza czy stos jest pełny
    ///@return zwraca True jeśli tak i False jeśli nie
    bool is_full();
    ///Funkcja typu bool
    ///
    ///Sprawdza czy stos jest pusty
    ///@return zwraca True jeśli tak i False jeśli nie
    bool is_empty();
    ///Funkcja length
    ///
    ///Zwraca wielkość stosu
    ///@return zmienną len
    int length();
    protected:
    T *tab; ///< wskaźnik do dynamicznej tablicy 
    int top; ///< przechowuje index szczytu stosu
    int len; ///< przechowuje długość stosu
};


template <class T> Stack<T>::Stack()
{
    len = 10;
    top = -1;
    tab = new T [len];
}


template <class T> int Stack<T>::length()
{
    return len;
}

template <class T> Stack<T>::Stack(int size)
{
    len = size;
    top = -1;
    tab = new T [size];
}

template <class T> Stack<T>::~Stack()
{
    delete [] tab;
}

template <class T> void Stack<T>::push(T c)
{
    if(is_full())
    {
        Info ii;
        ii.err = 2;
        throw ii;
    }
    else
    {
        top++;
        tab[top] = c;
    }
    return;
}

template <class T> T Stack<T>::pop()
{
    if(is_empty())
    {
        Info ii;
        ii.err = 1;
        throw ii;
    }
    else
    {
        T element = tab[top];
        top--;
        return element;
    }
}

template <class T> T Stack<T>::top_element()
{
    T element = tab[top];
    return element;
}

template <class T> bool Stack<T>::is_full()
{
    if (top == (len - 1))
        return true;
    else
        return false;
}

template <class T> bool Stack<T>::is_empty()
{
    if (top == -1)
        return true;
    else
        return false;
}

#endif