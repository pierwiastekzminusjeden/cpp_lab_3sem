#include "strop.h"
#include <iostream>
#include <cstring>

void chunk(const char *tekst, delimited *del, char znak){
    del->separator = znak;
    del->poczatek = tekst;
    del->start = del->poczatek;
    del->end = del->poczatek;
}

bool next(delimited *del){
    del->start = next_not_delim(del->end, del);
    del->end = next_delim(del->start, del);  
    
    if(*(del->start) == '\0')
        return false; 
    else
        return true;                           
}

void get_fragment(delimited *del, char *buffer){
    int i = del->end - del->start;
    strncpy(buffer, del->start, i);
    buffer[i] = '\0';  //wstawiam znak konca jakby gdyby nie bylo nastepnej linii
}

unsigned int fragment_size(delimited *del){
    return (del->end - del->start);
}

void rewind(delimited *del){
    if(del->start == del->poczatek)
        return;
    del->start = del->poczatek;
    del->end = del->start;
}

void previous(delimited *del){
    if(del->start == del->poczatek)
        return;
    del->end = previous_not_delim(del->start, del);
    del->start = previous_delim(del->end, del);  
}

const char *next_delim(const char *tekst, delimited *del){
    if(tekst == NULL)
        return NULL;
    while(*tekst != del->separator && *tekst != '\0')
        tekst++;                                   
    return tekst;                                   
}

const char *next_not_delim(const char *tekst, delimited *del){
   if(tekst == NULL)
        return NULL;
    while(*tekst == del->separator && *tekst != '\0')
        tekst++;
    return tekst;
}

const char *previous_delim(const char *tekst, delimited *del){
    if(tekst == NULL)
        return NULL;
    do{
        tekst--;
    }while(*(tekst-1) != del->separator && tekst != del->poczatek);                            //przeskakuje po znakach łanchucha
    return tekst;                                   //zwracam wskaznik na koniec wyrazu;
}

const char *previous_not_delim(const char *tekst, delimited *del){
   if(tekst == NULL)
        return NULL;
    do{
        tekst--;
    }while(*(tekst+1) == del->separator && tekst != del->poczatek);
    return tekst;
}
