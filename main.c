#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    __fpurge(stdin);
    char seguir;
    int opcion;
    int operando1, operando2,resutadoSuma, resultadoResta, resultadoDivision,resultadoMultiplicacion, resultadoFact1,resultadoFact2;

 do{

        printf("\n\nMenu");
        printf("\n 1. Ingresar primer operando (A=%.2d)  ", operando1);
        printf("\n 2. ingresar segundo operando (A=%.2d)  ", operando2);// este .2 asigna la cantidad de decimales... en este caso 2 decimales.
        printf("\n 3. Calcular todas las operaciones.");
        printf("\n 4. Mostrar todos los resultados ");
        printf("\n 5. Salir\n\n");
        scanf("\n%d", &opcion);

        switch(opcion){
        case 1:
                printf("ingrese el primer operando");
                scanf("%d",&operando1);
                break;
        case 2:
                printf("ingrese el segundo operando");
                scanf("%d", &operando2);
                break;
        case 3:
                resutadoSuma=suma(operando1,operando2);

                resultadoResta=resta(operando1,operando2);

                resultadoDivision=division(operando1,operando2);

                resultadoMultiplicacion=multiplicacion(operando1,operando2);

                resultadoFact1=factorial1(operando1);
                resultadoFact2=factorial1(operando2);

                break;


        case 4:

                printf("\n\nEl resultado de la suma es: %d",resutadoSuma);
                printf("\nEl resultado de la resta es: %d",resultadoResta);

                if(operando2==0)
                    {
                        printf("\nError, no se puede dividir por 0");
                    }else
                    {
                        printf("\nEl resultado de la division es: %d",resultadoDivision);
                    }

                printf("\nEl resultado de la multiplicacion es: %d",resultadoMultiplicacion);

                if(resultadoFact1==-1){

                    printf("\nNo se puede calcacular el numerando de un numero negativo");
                }else if(resultadoFact1==0){
                    printf("\nEl numerando de 0 es 1");

                }else{

                    printf("\nEl resultado del factorial de %d es: %d",operando1,resultadoFact1);
                }
                if(resultadoFact2==-1){

                    printf("\nNo se puede calcacular el numerando de un numero negativo");
                }else if(resultadoFact2==0){
                    printf("\nEl numerando de 0 es 1");

                }else{

                    printf("\nEl resultado del factorial de %d es %d",operando2,resultadoFact2);
                }

                break;
        case 5:
                printf("Ha salido del programa \n");

                break;
        default: ;

        }

    printf("\n\nPara salir oprima N, sino cualquier otra tecla para continuar");
    fflush(stdin);
    scanf("%c",&seguir);


}while(seguir!=110);
    printf("Ha salido del programa \n");


    return 0;
}
