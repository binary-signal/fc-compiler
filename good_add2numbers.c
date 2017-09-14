#include <stdio.h>
#include "fclib.h"

 int i , k  ;
 int cube(int i ){ 
 return i*i*i;
 } 
 void add(int n , int k ){ 
 int j ;
j = n+cube(k);
 writeInteger(j) ;
 } 
 int main(){ 
 k = readInteger();
 i = readInteger();
 add(k, i);
 return 0;
 } 

/*Your program is correct*/

//Accepted!
