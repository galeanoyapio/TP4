#include "lib.h"
#include "MKL25Z4.h"


void completoPaso(int pasos){
    int in[4] = {1,2,3,4};
    for(int a=0; a<4; a++){
        PTA -> PSOR |= (0u<<in[a]);
    }
    int secuencias=0;
    while(pasos > 4){
        secuencias++;
        pasos = pasos - 4;
    }
    for(int j=0; j<secuencias; j++){
        for(int i=1; i<pasos; i++){
            if(pasos = 1) PTA -> PSOR |= (1u<<in[1]);
            if((pasos <= 4) & (pasos != 1)){
                 PTA -> PSOR |= (1u<<in[i]);
                 PTA -> PSOR |= (0u<<in[i-1]);
                }
        
            }
        }
}

void normalPaso(int pasos){
    int in[4] = {1,2,3,4};
    for(int a=0; a<4; a++){
        PTA -> PSOR |= (0u<<in[a]);
    }
    int secuencias=0;
    while(pasos > 4){
        secuencias++;
        pasos = pasos - 4;
    }
    for(int j=0; j<secuencias; j++){
        for(int i=1; i<pasos; i++){
            if(pasos = 1){
                PTA -> PSOR |= (1u<<in[0]);
                PTA -> PSOR |= (1u<<in[1]);
            } 
            if((pasos <= 4) & (pasos != 1)){
                 PTA -> PSOR |= (1u<<in[i]);
                 PTA -> PSOR |= (1u<<in[i+1]);
                 PTA -> PSOR |= (0u<<in[i-1]);
                }
        
            }
        }
}

void medioPaso(int pasos){
    int in[4] = {1,2,3,4};
    for(int a=0; a<4; a++){
        PTA -> PSOR |= (0u<<in[a]);
    }
    int secuencias=0;
    while(pasos > 4){
        secuencias++;
        pasos = pasos - 8;
    }
    for(int j=0; j<secuencias; j++){
        for(int i=1; i<pasos; i++){
            if(pasos = 1) PTA -> PSOR |= (1u<<in[1]);
            if((pasos <= 8) & (pasos != 1)){
                 PTA -> PSOR |= (1u<<in[i]);
                 PTA -> PSOR |= (0u<<in[i-1]);
                }
        
            }
        }
}
