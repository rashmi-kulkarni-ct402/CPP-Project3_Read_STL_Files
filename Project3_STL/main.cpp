#include <iostream>
#include ".\headers\STLReader.h"
using namespace std;

int main()
{
    Shapes3D::STLReader stlObject;
    stlObject.readWriteSTLToText();
    return 0;
}