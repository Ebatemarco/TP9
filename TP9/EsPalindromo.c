/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Definiciones.h"


int EsPalindromo (char* Palindromo, int inicio, int final) 
{
    if (inicio >= final) //si ya revisamos todas las letras es Palindromo
        return TRUE;
    
    if (Palindromo[inicio] == Palindromo[final]) //Vemos si las letras del final y del principio son inguales
    {
        return EsPalindromo(Palindromo, inicio + 1, final - 1);//hacemos lo mismo comparando desde uno menos, vamos de mas afuera a mas adentro
    } 
    else //si no son iguales no es palindromo
    {
        return FALSE;
    }
}


