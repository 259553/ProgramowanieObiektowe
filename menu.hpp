///@file
#pragma once
#include "tablica.hpp"

/** funkcja otwierajaca menu
 * 
 * funkcja zarzadzajaca dzialaniem calego programu
 * 
 */
void menu();
void edycja(arkusz *arkusz1);
/** funkcja do tworzenia nowego arkusza
 * funkcja zajmuje sie tworzeniem arkusza o poprawnych rozmiarach
 * 
 * 
 * @param[out] arkusz1 stworzy nowy arkusz w miejsce arkusz1
 * @return zwraca kod bledu,0-brak bledu,1-niepoprawny rozmiar tworzonej tablicy
 * 
 * 
 */
int stworz(arkusz *arkusz1);