#include "lib.h"
#include "MKL25Z4.h"

int main(){
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK;
    int pasos;
    char selec;
    while(1){
        if(selec=='c') completoPaso(pasos);
        if(selec=='n') normalPaso(pasos);
        if(selec=='m') medioPaso(pasos);
    }    
}
