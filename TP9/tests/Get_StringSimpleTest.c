/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Get_StringSimpleTest.c
 * Author: ebatemarco
 *
 * Created on 18 de octubre de 2020, 18:08
 */

#include <stdio.h>
#include <stdlib.h>
#include "Definiciones.h"

/*
 * Simple C Test Suite
 */

void testGet_string() 
{
    char* str[LONG];
    int num;
    int result;
    int i;
    int resultadosnum[]={3,4,14};
    char* resultadosfrase[]={"hola","mundo","comoestanamigos"};
    
    for(i=0; i<=2;i++)
    {
        num = 0;
        result  = get_string(str[i], num);
        if ((result != resultadosnum[i])||(str[i]!= resultadosfrase[i]) /*check result*/)
        {
            printf("%%TEST_FAILED%% time=0 testname=testGet_string (Get_StringSimpleTest) message=error message sample\n");
        }
    }
}

int main(int argc, char** argv) 
{
    printf("%%SUITE_STARTING%% Get_StringSimpleTest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testGet_string (Get_StringSimpleTest)\n");
    testGet_string();
    printf("%%TEST_FINISHED%% time=0 testGet_string (Get_StringSimpleTest)\n");

    return (EXIT_SUCCESS);
}
