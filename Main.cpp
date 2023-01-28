#include "Headers/Factory.h"
#include "Headers/Builder.h"
#include "Headers/Singleton.h"
#include "Headers/Adapter.h"
#include <iostream>

using namespace std;

int main()
{
    //Array of different design patterns.
    Pattern *f[] = {
        new Factory(),
        new Builder(),
        new Singleton(),
        new Adapter()
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