/**
*Proszę przygotować klasy potrzebne do reprezentacji kartoteki studentów i prosty program korzystający z tych klas.
*Proszę napisać klasę Karta, która będzie reprezentowała kartę studenta.
*Klasę proszę podzielić na plik nagłówkowy i źródłowy.
*Proszę zacząć implementację od napisania konstruktora domyślnego i funkcji Wypisz, która będzie wypisywała na ekran tekst: "To jest karta.".
*Proszę napisać prosty program sprawdzający zaimplementowaną funkcjonalność.
*Proszę dodać prywatne pola przechowujące imię, nazwisko i rok studiów studenta oraz funkcje pozwalające na dostęp do tych pól i ich ustawianie.
*Proszę przetestować dodany kod.
*Proszę zmodyfikować funkcję Wypisz tak, aby wypisywała imię, nazwisko i rok studiów studenta.
*Proszę zaimplementować konstruktor pobierający trzy argumenty: imię, nazwisko i rok studiów. Konstruktor powinien ustawiać wartości odpowiednich pól. Konstruktor domyślny powinien do pól imię i nazwisko przypisywać nieznane, a rok studiów ustawiać na -1.
*Proszę przetestować działanie konstruktora.
Proszę zmodyfikować funkcję zwracającą imię studenta, tak aby zwracała referencję do pola.
// NIBY TAK ALE NIE DZIAŁA Proszę sprawdzić w programie, że rzeczywiście zwracana jest referencja.
Proszę do testów utworzyć stały obiekt reprezentujący kartę studenta np. const Karta superman ("Clark", "Kent", 3); i sprawdzić czy działają funkcje zapewniające odczyt poszczególnych pól klasy oraz funkcja Wypisz. Jeżeli coś nie działa proszę tak zmodyfikować kod, aby działało.
Proszę dodać publiczne pole będące referencją do nazwiska, tak aby poniższy kod zmieniał nazwisko zapisane na karcie:
Karta superman ("Clark", "Kent", 3);
superman.nazwiskoRef = "Gable";
Proszę napisać klasę Kartoteka, przechowującą obiekty typu Karta.
każda kartoteka powinna mieć swoją nazwę i nie powinno dać się utworzyć kartoteki bez nazwy
kartoteka powinna mieć możliwość dodawania do niej nowych i wypisywania wszystkich znajdujących się w niej kart
Proszę zmodyfikować kod aby miał następującą funkcjonalość.
Obiekty typu Karta powinny przechowywać wskaźnik do obiektu typu Kartoteka do którego została dopisana karta.
Nie może powstać obiekt typu Karta nieprzypisany do obiektu typu Kartoteka.
Obiekty typu Karta powinno dać się tworzyć poprzez metodę DodajNowaKarta znajdująca się w klasie Kartoteka.
Proszę przetestować zmodyfikowany kod.
Proszę zadbać o to, aby nie było wycieków pamięci.
*/
#include <iostream>
#include "Karta.h"

int main(){
    Karta k = Karta();
    k.wypisz();
    std::string &imie = k.get_imie();
    
    return 0;
}
