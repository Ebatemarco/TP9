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

void TestEsPalindromoTRUE() 
{
    char* Palindromo[]={"anana","anitalavalatina","larutanatural"};
    int inicio = 0;
    int final= 4;
    int result;
    int i;
    int stringlong[]={4,14,12};
        
    for(i=0; i<=2; i++)
    {
        inicio=0;
        final= stringlong[i];
        result = EsPalindromo(Palindromo[i], inicio, final);
        if (result==FALSE/*check result*/) 
        {
            printf("%%TEST_FAILED%% testname=testEsPalindromo (EsPalindromo Simple Test) message=error message sample\n");
            printf("Etapa: %s\n", Palindromo[i]);
        }
    }
}


void TestEsPalindromoFALSE() 
{

    char* Palindromo[]={"perro","gato","casa"};
    int inicio=0;
    int final=4;
    int result;
    int i;
    int stringlong[3]={4,3,3};
    
    for(i=0; i<=2; i++)
    {
        inicio=0;
        final= stringlong[i];
        result = EsPalindromo(Palindromo[i], inicio, final);
        if (result==TRUE/*check result*/) 
        {
            printf("%%TEST_FAILED%% time=0 testname=testEsPalindromo (EsPalindromo Simple Test) message=error message sample\n");
            printf("Etapa: %s\n", Palindromo[i]);
        }
    }
}

int main(void) 
{
    printf("%%SUITE_STARTING%% EsPalindromo Simple Test\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testEsPalindromoTRUE (EsPalindromo Simple Test)\n");
    TestEsPalindromoTRUE();
    printf("%%TEST_FINISHED%% testEsPalindromoTRUE (EsPalindromo Simple Test)\n");

    printf("%%TEST_STARTED%%  testEsPalindromoFALSE (EsPalindromo Simple Test)\n");
    TestEsPalindromoFALSE();
    printf("%%TEST_FINISHED%% testEsPalindromoFALSE (EsPalindromo Simple Test)\n");
    
    return (EXIT_SUCCESS);
}


