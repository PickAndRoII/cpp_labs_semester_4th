#pragma once

#include "ObiektMiotajacy.h"

void HandleExcept(ExceptType2 *x){
std::cout<<"Przetworz wyjatek Except2"<<" o adresie"<<x<<std::endl;
throw;
}

void HandleExcept(ExceptType1 *x){
std::cout<<"Przetworz wyjatek Except1"<<" o adresie"<<x<<std::endl;
throw;
}