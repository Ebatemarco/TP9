/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   EsPalindromo Simple Test.c
 * Author: ebatemarco
 *
 * Created on 18 de octubre de 2020, 10:10
 */

#include <stdio.h>
#include <stdlib.h>
#include "Definiciones.h"

/*
 * Simple C Test Suite
 */

void testEsPalindromo() 
{
    char* Palindromo;
    int inicio;
    int final;
    int result = EsPalindromo(Palindromo, inicio, final);
    if (1 /*check result*/) 
    {
        printf("%%TEST_FAILED%% time=0 testname=testEsPalindromo (EsPalindromo Simple Test) message=error message sample\n");
    }
}

int main(int argc, char** argv) 
{
    printf("%%SUITE_STARTING%% EsPalindromo Simple Test\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testEsPalindromo (EsPalindromo Simple Test)\n");
    testEsPalindromo();
    printf("%%TEST_FINISHED%% time=0 testEsPalindromo (EsPalindromo Simple Test)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
