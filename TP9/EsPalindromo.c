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
    if (inicio >= final) 
        return TRUE;
    
    if (Palindromo[inicio] == Palindromo[final]) 
    {
        return EsPalindromo(Palindromo, inicio + 1, final - 1);
    } 
    else 
    {
        return FALSE;
    }
}

