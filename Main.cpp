#include "Headers/Factory.h"
#include <iostream>

using namespace std;

int main()
{
    Pattern *f[] = {new Factory()};

    for (int i = 0; i < (sizeof(f) / sizeof(Pattern)); i++){
        f[i]->demoPattern();
    }

    return 0;
}