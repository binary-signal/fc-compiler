# fc-compiler
source to source compiler for Fictional C language aka FC to C

# Dependencies
First install Bison and Flex tools which are available to most unix systems


For example in Ubuntu OS open a terminal and run

sudo apt-get install update


sudo apt-get install flex bison


# Testing
to run the tests of the compiler open a terminal and run the following commands 


#chmod +x run_fcc 


./run_fcc

# Compile an FC source file to C
fcc < source_file.fc > destination_file.c

# Keywords of FC
static boolean integer character real
true false string void while
do break continue return begin
if else for end or
not and mod

# Basic Data types of FC
* integer
* boolean 
* character
* real
* string


# Standar Library of FC -  fclib
Build in functions for stadar library of fc  something like stdlib for C
* string readString() 
* void writeString(string s)
* integer readInteger() 
* void writeInteger(integer i)
* real readReal() 
* void writeReal(real r)
