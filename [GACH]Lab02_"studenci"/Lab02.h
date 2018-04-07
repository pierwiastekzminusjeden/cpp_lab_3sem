#ifndef Lab02_h
#define Lab02_h

#include <iostream> 
#include <cstdlib>
#include <cstring>

/**
*@numberOfStudents zmienna prezentujaca liczbe studentow
*@namesList tablica imion Studentow w formacie "firstName secondName"
*@surnamesList tablica nazwisk Studentow "surname";
*@yearsList tablica zawierajaca informacje o roku studiów danego studenta
*@AddStudent funkcja aktaulizujaca tablice z danymi studenta. 
    Inkrementuje zmienna @numberOfStudents odpowiadajaca liczbie wpisanych studentow.
    Do tablic wskaznikow @namesList, @surnamesList przypisuje wprowadzone imiona oraz nazwisko.
    Do tablicy @yearsList zostaje wpisany ostatni argument wywolania funkcji, ktory mowi o roku studiów studenta.
*/
void AddStudent(int *numberOfStudents, char ***namesList, char ***surnamesList, int **yearsList, const char *firstName, const char *secondName, const char *surmname, int year);   
/**
*@PrintListContent(int, char**) wypisuje na ekran listę ( @List ) imion lub nazwisk @numberOfStudets studentow - w nowych liniach
*/
void PrintListContent(int numberOfStudents, char **List);
/**
*@PrintListContent(int, int *) wypisuje na ekran liste lat studiowania ( @yearsList ) @numberOfStudets studentów - w nowych liniach
*/
void PrintListContent(int numberOfStudents, int *yearsList);
/**
*@PrintListContent(int, char **, char **, int) wypisuje na ekran wierszami wszystkie dane o  @numberOfStudets studentow
*/
void PrintListContent(int numberOfStudents, char **namesList, char **surnamesList, int *yearsList);
/**
*@ClearStudents funkcja zwalniajaca zaalokowana pamiec tablic @numberOfStudents, @namesList, @surnamesList, @yearsList
*/
void ClearStudents (int *numberOfStudents, char ***namesList, char ***surnamesList, int **yearsList);
    
    

#endif
