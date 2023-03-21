#include <stdio.h>

int cuadradoDeUnNumero (int num);
void cuadradoDeUnNum (int *pcuadrado, int num);
void invertir(int *pnum, int *pnum2);
void ordenar(int *pnum, int *pnum2);

int main (){

    int num, num2, cuadrado, *pcuadrado, *pnum, *pnum2;

    printf("Ingrese un numero para la variable a >> ");
    scanf("%d", &num);

    printf("\nLa direccion de la variable ingresada es %d\nEl contenido de la variable ingresada es %d", &num, num);

    printf("\n\nIngrese otro numero para la variable b >> ");
    scanf("%d", &num2);

    printf("\nLa direccion de la variable ingresada es %d\nEl contenido de la variable ingresada es %d", &num2, num2);

    cuadrado = cuadradoDeUnNumero(num);

    printf("\n\nEL cuadrado de %d es >> %d", num, cuadrado);
    
    *pcuadrado = 0;
    cuadradoDeUnNum(pcuadrado, num);
    printf("\n\nEl cuadrado es >> %d", *pcuadrado);

    pnum=&num;
    pnum2=&num2;

    invertir(pnum, pnum2);

    printf("\n\n>>>>Las variables invertidas<<<<");
    printf("\n\nAhora la variable a vale >> %d y la variable b vale >> %d", *pnum, *pnum2);

    ordenar(pnum, pnum2);

    printf("\n\n>>>>Las variableas ordenadas de menor a mayor<<<<");
    printf("\n\nEl valor a es %d y el valor b es %d", *pnum, *pnum2);

    getchar();
    return 0;
}


int cuadradoDeUnNumero (int num){

    int aux;

    aux = num * num;

    return aux;
}

void cuadradoDeUnNum (int *pcuadrado, int num){

    *pcuadrado = num * num;

}

void invertir(int *pnum, int *pnum2){
    int aux;

    aux = *pnum;
    *pnum=*pnum2;
    *pnum2=aux;

}

void ordenar(int *pnum, int *pnum2){
    int aux;

    if (*pnum > *pnum2){
        aux = *pnum,
        *pnum= *pnum2;
        *pnum2=aux;
    }
}