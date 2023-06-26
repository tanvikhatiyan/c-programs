//FILE: container in a stroge device to store data

//-RAM is voltile 
//-contents are lost when program termintes 
//-files are used to persist the data

//OPERTIONS ON FIEL:
//creat a file
//open a file
//chose a file
//read from a file
//write in a file

//TYPES OF FILE:
//1- text files : textual file (store in the form of text) i.e .txt, .c
//2 - binnary files : binary data (store in the form of 011011100... like this) i.e .exe, .mp3, .jpg

//FILE POINTER:
// file is a hidden structure that needs to be created for opening a file 
// a file ptr tht points to this structure & is used tp access the file
// FILE = *fptr

//example:

#include<stdio.h>
// OPENING A FILE :
// fptr = fopen("filename", mode);

//CLOSING A FILE:
// fclose(fptr);

int main()
{
    FILE *fptr;
    fptr = fopen("structure.c", "a");
    fclose(fptr);
    return 0;
}

//FILE OPENING MODE:
/* "r" = open to read
"rb" = open to read in binary
"w" = open to write
"wb" = open to write in binary
"a" = open to append
 */

//fgetc(fptr)
//fputs('A', fptr)

// example :

int main()
{
    FILE *fptr;
    fptr = fopen("newtest.txt","w");

    fputc('M', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fputc('o', fptr);

    fclose(fptr);
    return 0;
}