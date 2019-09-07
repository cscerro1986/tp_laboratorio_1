

/**
* @brief Suma dos valores enteros.
* @param num1 El primer valor, para realizar la operacion.
* @param num2 El segundo valor, para realizar la operacion.
* @return Devuelve el resultado de la suma de los operadores ingresados.
*/


int suma(int op1,int op2){
    int resultado;
    resultado=op1+op2;
    return resultado;

}

/**
* @brief Resta dos valores enteros.
* @param op1 El primer valor, para realizar la operacion.
* @param op2 El segundo valor, para realizar la operacion.
* @return Devuelve el resultado de la resta de los operadores ingresados.
*/



int resta(int op1,int op2){
    int resultado;
    resultado=op1-op2;
    return resultado;

}


/**
* @brief Divide dos valores enteros y si no es posible da mensaje de error.
* @param num1 El primer valor, para realizar la operacion.
* @param num2 El segundo valor, para realizar la operacion el cual debe ser distinto de 0.
* @return Devuelve el resultado de la division de los operadores ingresados.
*/



int division(int op1,int op2){
    int resultado;
    if(op2==0)
    {
            resultado=-1;
    }
    else
    {
    resultado=op1/op2;
    }
    return resultado;

}

/**
* @brief Multiplica dos valores enteros.
* @param num1 El primer valor, para realizar la operacion.
* @param num2 El segundo valor, para realizar la operacion.
* @return Devuelve el resultado de la multiplicacion de los operadores ingresados.
*/


int multiplicacion(int op1,int op2){
    int resultado;
    resultado=op1*op2;
     return resultado;
}

/**
* @brief Realiza el factorial de un numero ingresado, en caso de que sea un numero negativo, da un mensaje de error.
* @param num El numero al cual se desea realizar el factorial.
* @return Devuelve el resultado del factorial del numero ingresado.
*/


int factorial1(int valor){

    int resultado=1, i;

    if(valor<0){
        resultado=-1;
    }else if(valor==0){
        resultado=1;

    }else
    for(i=valor;i>0;i--){

        resultado=resultado*i;
       }

return resultado;
}

