#include "SistemaImobiliaria.h"
#include "Menu.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

int main(void){
    Menu m1 = Menu();


    while(1){
        int flagmenu = 0;
        switch(m1.Menu1()){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                flagmenu = 1;
                break;
        }
        if(flagmenu)
            break;
    }
    return 0;
}