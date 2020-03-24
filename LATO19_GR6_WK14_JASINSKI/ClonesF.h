#pragma once
#include <iostream>
#include <vector>

//Trywialna, pusta klasa pozwalajaca na wyrzucenie wyjatku
//wymaganego w main
template <typename Type>
class missing{
};

//Wirtualna klasa bazowa Base, ktora jest klasa bazowa dla Second.
//Base bedziemy uzywac do wektora
class Base{
public:
    Base() = default;
    //destruktor wirtualny zapewniajacy polimorficznosc
    virtual ~Base() = default;
};

//Second jest kontenerem dla zmiennej dowolnego typu. 
//Przechowuje wartosc zmiennej. Dziedziczy po Base. 
template<typename Type>
class Second : public Base{
public:

    Type get() const{
        return m_obj;
    }

    Second(const Type& obj) : m_obj(obj){} 
private:
    Type m_obj;
};


//Klasa ClonesF przechowujaca wektor wskaznikow do klasy bazowej Base, 
//ktora jest klasa bazowa dla Second, gdzie Second jest kontenerem
//dla zmiennej dowolnego typu. 
class ClonesF{
public:
    ClonesF() = default;

    //metoda szablonowa add, ktora dodaje do naszego wektora
    //wskaznik typu Base wskazujacy na obiekt, ktory przekazalismy
    //do funkcji
    template<typename Type>
    void add(const Type& obj){
        for(auto el : container){
            Second<Type>* tmp = dynamic_cast<Second<Type>*> (el);
            if(tmp){
                throw std::runtime_error("Element tego typu juz istnieje");
            }
        }
        Base *ptr = new Second<Type>(obj);
        container.push_back(ptr);
    }

    //metoda szablonowa clone, ktora po sprawdzenie dynamic castem 
    //zwraca nam objekttakiego typu, ktory chcemy otrzymac.
    //W razie braku tego obiektu rzca wyjatek typu missing
    template<typename Type>
    Type clone(){
        for(auto el : container){
            Second<Type>* tmp = dynamic_cast<Second<Type>*> (el);
            if(tmp){
                return tmp->get();
            }
        }
        throw missing<Type>();
    };

    //destruktor usuwa elementy z wektora
    ~ClonesF(){
        for(auto el : container){
            delete el;
        }
    }
private:
    //wektor przechowujacy elementy typu Base*
    std::vector<Base*> container;
};


