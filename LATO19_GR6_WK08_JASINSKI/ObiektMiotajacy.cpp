#include "ObiektMiotajacy.h"


void ObiektMiotajacy::Rzuc(){
    except= new ExceptType4;
    throw except;
}

ObiektMiotajacy::~ObiektMiotajacy(){
    delete except;
}