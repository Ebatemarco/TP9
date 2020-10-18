/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest1.c
 * Author: ebatemarco
 *
 * Created on 18 de octubre de 2020, 19:36
 */

#include <stdio.h>
#include <stdlib.h>
#include "Definiciones.h"

/*
 * Simple C Test Suite
 */

void testEsPalindromoNoRecursivo() {
    char* Frase;
    int LongFrase;
    int result = EsPalindromoNoRecursivo(Frase, LongFrase);
    if (1 /*check result*/) {
        printf("%%TEST_FAILED%% time=0 testname=testEsPalindromoNoRecursivo (newsimpletest1) message=error message sample\n");
    }
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest1\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testEsPalindromoNoRecursivo (newsimpletest1)\n");
    testEsPalindromoNoRecursivo();
    printf("%%TEST_FINISHED%% time=0 testEsPalindromoNoRecursivo (newsimpletest1)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
