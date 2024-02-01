#include "../headers/Point3D.h"
using namespace Shapes3D;

Point3D::Point3D()
{
    mX = 0.0;
    mY = 0.0;
    mZ = 0.0;
}

Point3D::Point3D(double x, double y, double z)
{
    mX = x;
    mY = y;
    mZ = z;
}

Point3D::~Point3D() {}

double Point3D::x() const
{
    return mX;
}

double Point3D::y() const
{
    return mY;
}

double Point3D::z() const
{
    return mZ;
}

void Point3D::setX(double x)
{
    mX = x;
}

void Point3D::setY(double y)
{
    mY = y;
}

void Point3D::setZ(double z)
{
    mZ = z;
}