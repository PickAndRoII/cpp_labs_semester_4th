#pragma once
#include <string>
#include <stdexcept>

class Calc_error : public std::runtime_error{
public:
    //konstruktor klasy Calc_error
    Calc_error(std::runtime_error *err, const char* txt, const char* file, const int line)
    : std::runtime_error(txt), next(err), m_file(file), m_line(line){}
    ~Calc_error() = default;

    //funkcja statyczna, ktora zarzadza bledami wyrzucanymi w main
    //w srodku pertla, ktora zarzadza bledami jakby byly na liscie,
    //az do momentu, kiedy dojdziemy do najnizszego poziomu,
    //na ktorym error to std::runtime_error
    static void handler();

private:
    std::runtime_error *next;
    std::string m_file;
    int m_line;
};