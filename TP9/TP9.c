/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TP9.c
 * Author: ebatemarco
 *
 * Created on October 15, 2020, 2:51 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define LONG 50

//int EsPalindromo (*char Palindromo, int cant);

int EsPalindromoNoRecursivo (char* Frase, int LongFrase);

/*
 * 
 */
int main(void)
{
    char str[LONG];
    int n_elements=0;
    int Pal;
    while(getchar() != '\n')
    {
        str[n_elements]=getchar(); //falta que ignore espacios 
        n_elements++;
    }
    n_elements--;
    
    Pal=EsPalindromoNoRecursivo(str[0], n_elements);
    
    printf("%d",Pal);
    
    return (0);
}

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

