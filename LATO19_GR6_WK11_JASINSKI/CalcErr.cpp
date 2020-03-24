#include "CalcErr.h"
#include <string>
#include <iostream>

void Calc_error::handler(){
        std::cout<<"Zlapano wyjatek:"<<std::endl;
        
        try{
            throw;
        }

       
        catch(std::runtime_error* err){
            Calc_error* er = dynamic_cast<Calc_error*>(err);

            while(er){
            std::cout<<"-- z powodu: "<<er->what()<<", [plik = "<<er->m_file<<", linia = "<<er->m_line<<"]"<<std::endl;
            Calc_error* tmp = er;
            er = dynamic_cast<Calc_error*>(er->next);
            if(!er){

                    std::cout<<"-- z powodu: "<<(tmp->next)->what()<<std::endl;
                }
            }
        }   
    }