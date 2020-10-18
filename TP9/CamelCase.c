/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

void CamelCase (char* str, int final)
{
    int i;
    for(i=0; i<=final; i++)
    {
        if(((str[i])>='A') && ((str[i])<='Z'))
        {
            (str[i])=(str[i])+32;
        }
    }		
}
