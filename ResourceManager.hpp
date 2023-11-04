#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource *res;//W ten sposób przechowujemy wskaźnik do miejsca pamięci, w którym faktycznie znajduje się Resource.
    //Oznacza to, że nie musimy go przechowywać w przestrzeni pamięci wewnątrz tej klasy, tylko możemy posiadać niewielkie odniesienie. 
public:
    ResourceManager() : res(new Resource()) {}//Wewnątrz konstruktora domyślnego ResourceManager jest wywoływany konstruktor domyślny klasy Resource.
    //Przy samej inicjalizacji tworzymy "zmienną" typu Resource (konstruktor domyślny).
    double get() { return res->get(); }//Pierwsza metoda get należy do klasy ResourceManager a drugie get należy do struktury Resource res.
    //Ponieważ jest to struktura a nie klasa, więc zamiast kropki jest strzałka.

    ~ResourceManager() { delete res; }
};
