/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

void CamelCase (char* str, int final)
{
    int i;
    for(i=0; i<final; i++)//Nos movemos letra por letra
    {
        if(((str[i])>='A') && ((str[i])<='Z'))//Si son mayusculas las convertimos en minusculas
        {
            (str[i]) = (str[i])+ 'a' - 'A';
        }
    }		
}
