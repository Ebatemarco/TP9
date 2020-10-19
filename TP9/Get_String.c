/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Definiciones.h"

int get_string (char str[LONG], int num)
{   
    char c;
    while((c=getchar()) != '\n')//obtenemos el caracter escrito por el usuario
    {
        if( ( (c>='A') && (c<='Z') )|| ( (c>='a') && (c<= 'z') ) )//si es una letra lo guardamos 
        {    
            str[num] = c; 
            num++;
        }
    }
    num--;
    return num;//devolvemos el largo del arreglo
}

