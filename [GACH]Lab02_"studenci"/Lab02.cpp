#include "Lab02.h"


void AddStudent(int *numberOfStudents, char ***namesList, char ***surnamesList, int **yearsList,
    const char *firstName, const char *secondName, const char *surname, int year){
    
    //alokacja pamieci dla wskaznikow do tablic znakowych przechowujacych pierwszy pakiet danych , I poziom
    if(*numberOfStudents==0){
        *namesList=(char **)malloc(sizeof(char *));
        *surnamesList=(char **)malloc(sizeof(char *));
        *yearsList=(int *)malloc(sizeof(int));
    }
    else{
    //realokacja pamieci dla wskaznikow do tablic znakowych przechowujacych kolejne pakiety.
    //liczba pakietow za kazdym wywolaniem zwieksza sie o 1
        *namesList=(char**)realloc(*namesList, (*numberOfStudents+1) * sizeof(char *));
        *surnamesList=(char**)realloc(*surnamesList, (*numberOfStudents+1) * sizeof(char *));
        *yearsList=(int *)realloc(*yearsList, (*numberOfStudents+1) * sizeof(int));
    }  
    //alokacja pamieci na odpowiednie tablice znakowe przechowujace l:21 pierwsze i drugie imie, l:22 nazwisko, II poziom
    (*namesList)[*numberOfStudents]=(char*)malloc(sizeof(firstName)+sizeof(secondName)+1);
    (*surnamesList)[*numberOfStudents]=(char*)malloc(sizeof(surname));

    //kopiowanie lancuchow znakowych (imiona, nazwisko) przekazanych do funkcji do odpowiedniej tablicy 
    strcpy( (*namesList)[*numberOfStudents], firstName);
    strcat( (*namesList)[*numberOfStudents]," ");
    strcat( (*namesList)[*numberOfStudents], secondName);

    strcpy( (*surnamesList)[*numberOfStudents], surname);
    (*yearsList)[*numberOfStudents]=year;
    //po udanej operacji zwiekszenie liczby studentow o 1 (poczatkowa liczba studentow ==0)
    (*numberOfStudents)++;    
}

void PrintListContent(const int numberOfStudents, char **list){
    for(int i=0; i<numberOfStudents; i++)
        std::cout <<list[i]<<std::endl;    
}

void PrintListContent(const int numberOfStudents, int *yearsList){
    for(int i=0; i<numberOfStudents; i++)
    std::cout <<yearsList[i]<<std::endl; 
}

void PrintListContent(const int numberOfStudents, char **namesList, char **surnamesList, int *yearsList){
    for(int i=0; i<numberOfStudents; i++)
        std::cout << surnamesList[i] << ", " << namesList[i] << " - year " << yearsList[i] << std::endl; 
}

void ClearStudents (int *numberOfStudents, char ***namesList, char ***surnamesList, int **yearsList){
    //zwolnienie pamieci II poziom
    for(int i=0; i<*numberOfStudents; i++){
        free( (*namesList)[i]);
        free( (*surnamesList)[i]);
    }
    //zwolnienie pamieci I poziom
    free(*namesList);
    free(*surnamesList);
    free(*yearsList);
}
