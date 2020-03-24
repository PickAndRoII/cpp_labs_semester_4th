#pragma once

class AttColor{
public:
    AttColor(Option o) : Fopt(o);
    enum Option{BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, GRAY, WHITE, RESET};
    virtual Option getColor();
    virtual ~AttColor();
private:
    Option Fopt;

};

Option getColor(){
    
}