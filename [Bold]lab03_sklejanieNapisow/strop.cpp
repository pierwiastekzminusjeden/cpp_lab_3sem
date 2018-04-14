#include "strop.h"
#include <iostream>
#include <cstring>

void chunk(const char *tekst, delimited *del, char znak){
    del->separator=znak;
    del->poczatek = tekst;
    del->start = del->poczatek;
    del->end = del->poczatek;
}

void part(delimited *del, char *buffer){
    int n = del->end - del->start;
    strncpy(buffer, del->start, n);
    buffer[n] = '\0';                                 //koniec lancucha jakby nie bylo nastepnego
}

bool next(delimited *del){
    del->start = next_not_delim(del->end, del);
    del->end = next_delim(del->start, del);  
    if(*del->start == '\0')
        return false; 
    else
        return true;                           
}

const char *next_delim(const char *tekst, delimited *del){
    if(tekst==NULL)
        return NULL;
    while(*tekst != del->separator && *tekst != '\0')
        tekst++;                                    //przeskakuje po znakach łanchucha
    return tekst;                                   //zwracam wskaznik na koniec wyrazu;
}

const char *next_not_delim(const char *tekst, delimited *del){
   if(tekst==NULL)
        return NULL;
    while(*tekst == del->separator && *tekst != '\0')
        tekst++;
    return tekst;
}
