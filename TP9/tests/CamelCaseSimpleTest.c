/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CamelCaseSimpleTest.c
 * Author: ebatemarco
 *
 * Created on 18 de octubre de 2020, 18:23
 */

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

/*
 * Simple C Test Suite
 */

int CompareStringElements (char* str1, char* str2, int inicio, int final);

void CamelCase(char* str, int final);

void testCamelCase() 
{
    char* str[]={"HolaMUNDO","EsPeROUn","SoYUNGeNIO"};
    int final[]={8,9,9};
    char* results[]={"holamundo","esperoun","soyungenio"};
    int i;
    
    printf("%s",str[0]);
    
    for(i=0; i<=2;i++)
    {
        CamelCase(str[i], final[i]);
        
        if ( CompareStringElements(str[i], results[i],0,final[i]) /*check result*/) 
        {
            printf("%%TEST_FAILED%% testname=testCamelCase (CamelCaseSimpleTest) message=error message sample\n");
        }
    }
}

int CompareStringElements (char* str1, char* str2, int inicio, int final) 
{
    if (inicio >= final) 
        return FALSE;
    
    if (str1[inicio] == str2[inicio]) 
    {
        return CompareStringElements(str1, str2, inicio + 1, final);
    } 
    else 
    {
        return TRUE;
    }
}

int main(void) 
{
    printf("%%SUITE_STARTING%% CamelCaseSimpleTest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%% testCamelCase (CamelCaseSimpleTest)\n");
    testCamelCase();
    printf("%%TEST_FINISHED%% testCamelCase (CamelCaseSimpleTest)\n");
    
    printf("%%SUITE_FINISHED%% \n");

    return (EXIT_SUCCESS);
}

