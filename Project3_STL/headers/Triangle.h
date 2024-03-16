#pragma once
#include "Point3D.h"

namespace Shapes3D
{
    class Triangle
    {
    public:
        Triangle();
        Triangle(Point3D p1, Point3D p2, Point3D p3);
        ~Triangle();

        Point3D vertex1() const;
        Point3D vertex2() const;
        Point3D vertex3() const;

    private:
        Shapes3D::Point3D mVertex1;
        Shapes3D::Point3D mVertex2;
        Shapes3D::Point3D mVertex3;
        // Point3D normal;
    };
}