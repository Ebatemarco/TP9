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
#include "Definiciones.h"

/*
 * 
 */
int main(void)
{
    char str[LONG];
    int n_elements=0;
    int Pal;
    
    //Esto puede ser una funcion
    while(getchar() != '\n')
    {
        str[n_elements]=getchar(); //falta que ignore espacios 
        n_elements++;
    }
    n_elements--;
    
    Pal=EsPalindromoNoRecursivo(str[0], n_elements);
    
    if(Pal==1)
        printf("TRUE");
    else
        printf("FALSE");
    
    return (0);
}








