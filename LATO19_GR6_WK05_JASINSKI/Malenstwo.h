#pragma once
#include <iostream>

class Malenstwo{
public:
    Malenstwo() = default;
    Malenstwo(int val);
    void* operator new(size_t size);
    void* operator new[](size_t size);
    void operator delete(void *wsk);
    int& wartosc();
    ~Malenstwo() = default;
private:
    int m_val;
    static int m_count;
    static Malenstwo* m_p;
};


