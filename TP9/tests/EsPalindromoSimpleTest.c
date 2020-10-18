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

void TestEsPalindromoTRUE()//Pruebas para palabras que son palindromos 
{
    char* Palindromo[]={"anana","anitalavalatina","larutanatural"};/*Palabras a probar, no olvidar que EsPalindromo
    DEBE recibir palabras en minuscula y sin espacios(las funciones de nuestro main se encargan de esto)*/
    int inicio = 0;
    int result;
    int i;
    int stringlong[]={4,14,12};//largo de las palabras de Palindromo
        
    for(i=0; i<=2; i++)
    {
        inicio=0;
        result = EsPalindromo(Palindromo[i], inicio, stringlong[i]);//Vemos si el EsPalindromo funciona
        if (result==FALSE/*check result*/) 
        {
            printf("%%TEST_FAILED%% testname=testEsPalindromo (EsPalindromo Simple Test) message=error message sample\n");
            printf("Etapa %d: %s\n",i, Palindromo[i]);//En que palabra fallo
        }
    }
}


void TestEsPalindromoFALSE() //Prueba para palabras que no son palindromos
{

    char* Palindromo[]={"perro","gato","casa"};//Palbras que no son palindromos 
    int inicio=0;
    int result;
    int i;
    int stringlong[3]={4,3,3};//Largo de las palabras
    
    for(i=0; i<=2; i++)
    {
        inicio=0;
        result = EsPalindromo(Palindromo[i], inicio, stringlong[i]);//Vemos si el EsPalindromo funciona
        if (result==TRUE/*check result*/) 
        {
            printf("%%TEST_FAILED%% testname=testEsPalindromo (EsPalindromo Simple Test) message=error message sample\n");
            printf("Etapa %d: %s\n", i, Palindromo[i]);//En que parte fallo
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
    
    printf("%%SUITE_FINISHED%% \n");
    
    return (EXIT_SUCCESS);
}


