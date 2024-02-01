#pragma once
namespace Shapes3D
{
    class Point3D
    {
    public:
        Point3D();
        Point3D(double x, double y, double z);
        ~Point3D();

        double x() const;
        double y() const;
        double z() const;

        void setX(double x);
        void setY(double y);
        void setZ(double z);

    private:
        double mX;
        double mY;
        double mZ;
    };
}