#include "../headers/Triangle.h"
using namespace std;
namespace Shapes3D
{
    Triangle1::Triangle1() {}
    Triangle1::Triangle1(Point3D p1, Point3D p2, Point3D p3)
    {
        mVertex1 = p1;
        mVertex2 = p2;
        mVertex3 = p3;
    }

    Triangle1::~Triangle1() {}

    Point3D Triangle1::vertex1() const
    {
        return mVertex1;
    }

    Point3D Triangle1::vertex2() const
    {
        return mVertex2;
    }

    Point3D Triangle1::vertex3() const
    {
        return mVertex3;
    }
}
