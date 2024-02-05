#include "../headers/Triangle.h"
using namespace std;
using namespace Shapes3D;

Triangle::Triangle() {}
Triangle::Triangle(Point3D p1, Point3D p2, Point3D p3)
{
    mVertex1 = p1;
    mVertex2 = p2;
    mVertex3 = p3;
}

Triangle::~Triangle() {}

Point3D Triangle::vertex1() const
{
    return mVertex1;
}

Point3D Triangle::vertex2() const
{
    return mVertex2;
}

Point3D Triangle::vertex3() const
{
    return mVertex3;
}
