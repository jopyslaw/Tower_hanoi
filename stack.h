#include <iostream>

template <class T> class Stack
{
    public:
    Stack();
    Stack(int size);
    ~Stack();
    void push(T c);//+
    T pop();//+
    T top_element();//+
    bool is_full();//+
    bool is_empty();//+
    int length();
    int top_ret();
    protected:
    T *tab;
    int top;
    int len;
};


template <class T> Stack<T>::Stack()
{
    len = 10;
    top = -1;
    tab = new T [len];
}

template <class T> int Stack<T>::top_ret()
{
    return top;
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
        std::cout << "Stos jes pełny" << std::endl;
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
    T element = tab[top];
    top--;
    return element;
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