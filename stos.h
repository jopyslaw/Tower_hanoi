#include <iostream>
#define SIZE 50

class Info
{
    public:
    int err;
};

template <class Typ> class stos
{
    public:
    stos(int size = SIZE);
    ~stos();
    void push(Typ);
    Typ pop();
    Typ peek();
    int size();
    void clear();
    bool is_empty();//+
    bool is_full();//+
    void copy(stos<Typ> &x); // nie działa
    protected:
    Typ *tab;
    int top;
    int len;
};

template <class Typ> stos<Typ>::stos(int x)
{
    tab = new Typ [x] ();
    len = x;
    top = -1;
}

template <class Typ> stos<Typ>::~stos()
{
    delete [] tab;
}

template <class Typ> void stos<Typ>::push(Typ x)
{
    if(is_full())
    {
        Typ *tab2 = new Typ [len+SIZE];
        for(int i=0; i<len;i++)
        {
            tab2[i] = tab[i];
        }
        delete [] tab;
        tab = tab2;
        len += SIZE;
    }
    top++;
    tab[top] = x;
    return;
}

template <class Typ> Typ stos<Typ>::pop()
{
    if(is_empty())
    {
        Info ii;
        ii.err = 1;
        throw ii;
    }
    else
    {
        return tab[top--];
    }
}

template <class Typ> void stos<Typ>::clear()
{
    delete [] tab;
    tab = new Typ [len] ();
    top = -1;
}

template <class Typ> Typ stos<Typ>::peek()
{
    if(is_empty())
    {
        Info ii;
        ii.err = 1;
        throw ii;
    }
    else
    {
        return tab[top];
    }
}

template <class Typ> int stos<Typ>::size()
{
    return top+1;
}

template <class Typ> bool stos<Typ>::is_full()
{
    return top == len-1;
}

template <class Typ> bool stos<Typ>::is_empty()
{
    return top == -1;
}

template <class Typ> void stos<Typ>::copy(stos<Typ> &x)
{
    if(len < x.len)
    {
        delete [] tab;
        tab = new Typ [x.len] ();
    }
    len = x.len;
    top = x.top;
    for(int i=0;i<len;i++)
    {
        tab[i] = x.tab[i];
    }
}

