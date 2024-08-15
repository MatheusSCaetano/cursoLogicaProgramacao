#include <stdio.h>
#include <stdlib.h>

int main(){
    int horaCinema = 20;
    int horaAtual = 20;

    //posso entrar
    if(horaAtual > horaCinema + 30){
        printf("Passou da hora de entrar");
    }else if(horaAtual < horaCinema - 10){
        printf("Ainda nao pode entrar!");
    }else{
        printf("Pode entrar");
    }


return 0;

}

