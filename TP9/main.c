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
    int n_elements = 0;
    int Pal;
    int cero =0;
    
    
    n_elements = get_string (str, n_elements);//obtenemos lo que escribe el usuario y el numero de letras
    
    CamelCase (str, n_elements);//convertimos todas las letras a minuscula
    
    Pal = EsPalindromo(str, cero ,n_elements);//vemos si lo escrito es un palindromo
    
    //Pal = EsPalindromoNoRecursivo(str, n_elements);
    
    
    //Devolvemos TRUE o FALSE dependiendo de si es o no palindromo
    if(Pal==1)
        printf("TRUE");
    else
        printf("FALSE");
    
    return (0);
}


