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
        while((c=getchar()) != '\n')
        {
            if( ( (c>='A') && (c<='Z') )|| ( (c>='a') && (c<= 'z') ) )
            {    
                str[num] = c; 
                num++;
            }
        }
        num--;
        return num;
    }

