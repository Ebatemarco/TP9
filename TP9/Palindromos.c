/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Definiciones.h"

/*
int EsPalindromo (char* Palindromo, int cant)
{
    if(cant<=1)
    {
        return(TRUE);
    }
    else if()
    {
        return();
    }    
    else
    {
        return;
    }                
}
*/

int EsPalindromoNoRecursivo (char* Frase, int LongFrase)
{
    int inicio, final;
    final = LongFrase; 
    if(LongFrase<=1)
        return(TRUE);
    else
    {
        while(Frase[inicio]==Frase[final])
        {
            if(inicio>=final)
                return TRUE;
            inicio++;
            final--;
        }
        return FALSE;
    }
                
}

