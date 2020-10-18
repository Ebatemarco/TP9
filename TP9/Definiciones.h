/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Definiciones.h
 * Author: ebatemarco
 *
 * Created on October 15, 2020, 3:33 PM
 */

#define TRUE 1
#define FALSE 0
#define LONG 50

int EsPalindromo (char* Palindromo, int inicio, int final);
/*Recive una palabra(solo letras minusculas), un valor inicial (casi siempre 0) y el vamos final(el largo de la palabra,
 * la posicion del ultimo elemento del ultimo elemento del string). De manera recursiva compara de 
 * afuera hacia adentro las letras de la palabra y ve si son iguales). Nos devuelve si es o no un palindromo*/

int EsPalindromoNoRecursivo (char* Frase, int LongFrase);
/*Igual que la funcion EsPalindromo pero de manera no recursiva, sirvio de inspiracion/base para crear 
 EsPalindromo*/

int get_string (char str[LONG], int num);
/*Funcion que carga el string con lo que ingrese el usuario, ignora todo lo que no sean letras.
 Ademas nos da el largo de la palabra o frase ingresada*/

void CamelCase (char* str, int final);
/*De lo ingresado por el usuario(letras) convierte todo a minuscula para que EsPalindromo pueda funcionar*/
