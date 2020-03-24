#pragma once
#include <iostream>

/*Szablon klasy DynArray, ktora jest kontenerem na tablice dynamiczna zadanego 
typu*/
template <typename T>
class DynArray{
    public:
        /*Podlklasa Iterator, przechowujacy wskaznik do elementu 
        tablicy dzieki ktorej mozemy w latwy sposob wykonywac operacje 
        na elementach naszej tablicy*/
        class Iterator{
        public:
            /*Konstruktor klasy Iterator przyjmujacy wskaznik na typ
            naszego kontenera*/
            Iterator(T* ptr) : m_ptr(ptr){}

            /*Operator nierownosci, zwracajacy boola, true jezeli
            nierownosc jest prawdziwa, a false jezeli oba elementy
            sa rowne */
            bool operator!=(const Iterator& iter);

            /*Operator preinkrementacji, zwiekszajacy nasz
            wskaznik o 1 */
            void operator++();

            /*Operator *, ktory zwraca nam wartosc elementu
            tablicy na ktorym operujemy */
            T operator*();

            /*Operator ->, ktory zwraca nam adres do elementu,
            na ktorym operujemy */
            Iterator* operator->(){
                return this;
            }

            /*Funkcja append, ktora przyjmuje wartosc i rozszerza 
            o nia aktualny element tablicy*/
            void append(const T str);
            
        private:
            T* m_ptr;
        };

        /*Konstruktor klasy DynArray przyjmujacy rozmiar tablicy 
        jako n i alokujacy miejsce na n elementow typu T*/
        DynArray(int n);

        /*Konstruktor klasy DynArray przyjmujacy rozmiar tablicy jako n
        oraz tablice typu T, alokujacy miejsce na n elementow typu T
        oraz przepisujacy elementy z tablicy do naszego kontenera*/
        DynArray(int n, const T* arr);

        /*Konstruktor kopiujacy klasy DynArray dla naszego kontenera*/
        DynArray(const DynArray& arr);

        /*Funkcja size zwracajaca liczbe elementow tablicy*/
        int size() const;

        /*Operator nawiasow kwadratowych, zwracajacy referencje do
        elementu tablicy o indeksie idx*/
        T& operator [](int idx) const;

        /*Funkcja begin, zwracajaca wskaznik na poczatek naszego
        kontenera*/
        Iterator begin() const{
            Iterator begin(&m_array[0]);
            return begin;
        }  

        /*Funkcja end, zwracajaca wskaznik na koniec naszego
        kontenera*/
        Iterator end() const{
            Iterator end(&m_array[m_size]);
            return end;
        }

        /*Destruktor klasy DynArray zwalniajacy zaalokowane miejsce */
        ~DynArray();

    private:
        int m_size;
        T* m_array;

};

/////////////////Definicje metod klasy DynArray////////////////////////////
template <typename T>
DynArray<T>::DynArray(int n) : m_size(n){
     m_array = new T[m_size];
        }

template <typename T>
DynArray<T>::DynArray(int n, const T* arr) : m_size(n){
    m_array = new T[m_size];
    for(int i = 0; i < m_size; ++i){
        m_array[i] = arr[i];
    }
}

template <typename T>
DynArray<T>::DynArray(const DynArray& arr) : m_size(arr.size()){
    m_array = new T[m_size];
    for(int i = 0; i < m_size; ++i){
        m_array[i] = arr.m_array[i];
    }
}

template <typename T>
int DynArray<T>::size() const{
    return m_size;
}

template <typename T>
T& DynArray<T>::operator [](int idx) const{
    return m_array[idx];
}

// template <typename T>
// Iterator DynArray<T>::begin() const {
//     Iterator begin(&m_array[0]);
//     return begin;
// }

// template <typename T>
// Iterator DynArray<T>::end() const {
//     Iterator end(&m_array[m_size]);
//     return end;
// }


template <typename T>
DynArray<T>::~DynArray(){
    delete[] m_array;
}

/////////////////Definicje metod podklasy Iterator////////////////////////////
template <typename T>
bool DynArray<T>::Iterator::operator!=(const Iterator& iter){
    if(iter.m_ptr == this->m_ptr)
        return false;
    else
    return true;
}

template <typename T>
void DynArray<T>::Iterator::operator++(){
    m_ptr = m_ptr + 1;
}

template <typename T>
T DynArray<T>::Iterator::operator*(){
    return *m_ptr;
}

// template <typename T>
// Iterator* DynArray<T>::Iterator::operator->(){
//     return this;
// }

template <typename T>
void DynArray<T>::Iterator::append(const T str){
    *m_ptr = *m_ptr + str;
}


/*operator <<, pozwalajacy na uzycie naszego obiektu
w strumieniu wyjscia*/
template <typename T>
std::ostream& operator<<(std::ostream& o, DynArray<T>& arr){
    o<<"{";
    for(int i = 0; i < arr.size()-1; ++i){
        o<<"\""<<arr[i]<<"\", ";
    }
    o<<"\""<<arr[arr.size()-1]<<"\" ";
    o<<"}";
    return o;
}