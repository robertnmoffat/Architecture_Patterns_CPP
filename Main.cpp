#include "Headers/Factory/Factory.h"
#include "Headers/Builder/Builder.h"
#include "Headers/Singleton.h"
#include "Headers/Adapter/Adapter.h"
#include "Headers/Strategy.h"
#include "Headers/Observer/Observer.h"
#include <iostream>

using namespace std;

int main()
{
    //Array of different design patterns.
    Pattern *f[] = {
        new Factory(),
        new Builder(),
        new Singleton(),
        new Adapter(),
        new Strategy(),
        new Observer()
        };

    //Iterate through a demo of each design pattern.
    for (int i = 0; i < (sizeof(f) / sizeof(Pattern)); i++){
        f[i]->demoPattern();
        cout << "-------------------------------------------------------------" << endl;
    }

    //Free heap memory
    for (int i = 0; i < (sizeof(f) / sizeof(Pattern)); i++){
        delete f[i];
    }

    return 0;
}