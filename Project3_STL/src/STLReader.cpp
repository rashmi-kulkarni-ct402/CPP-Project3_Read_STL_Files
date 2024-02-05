#include "../headers/STLReader.h"
#include "../headers/Triangle.h"
#include "../headers/Point3D.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
using namespace Shapes3D;

Shapes3D::STLReader::STLReader()
{
}

STLReader::~STLReader()
{
}

void STLReader::readWriteSTLToText()
{
    string fileName;
    cout << "Please enter file name without extension." << endl;
    cin >> fileName;

    ifstream readFromFile("D:/rashmi_workspace/CPP/Project3_STL/stlFiles/" + fileName + ".stl");
    ofstream WriteToFile("D:/rashmi_workspace/CPP/Project3_STL/textFiles/" + fileName + ".txt");

    if (readFromFile.is_open() || WriteToFile.is_open())
    {
        vector<Point3D> pointCoord;
        vector<Shapes3D::Triangle> triangleVertices;
        string line;

        while (getline(readFromFile, line))
        {
            Point3D p(0, 0, 0);
            if (line.find("vertex") != string::npos)
            {
                istringstream iss(line);
                string keyword;
                double x, y, z;
                iss >> keyword >> x >> y >> z;
                p.setX(x);
                p.setY(y);
                p.setZ(z);
                pointCoord.push_back(p);
            }
        }

        for (size_t i = 0; i < pointCoord.size(); i = i + 3)
        {
            Shapes3D::Triangle triangle(pointCoord[i], pointCoord[i + 1], pointCoord[i + 2]);
            triangleVertices.push_back(triangle);
        }

        for (size_t i = 0; i < triangleVertices.size(); i++)
        {
            WriteToFile << triangleVertices[i].vertex1().x() << " " << triangleVertices[i].vertex1().y() << " " << triangleVertices[i].vertex1().z() << std::endl;
            WriteToFile << triangleVertices[i].vertex2().x() << " " << triangleVertices[i].vertex2().y() << " " << triangleVertices[i].vertex2().z() << std::endl;
            WriteToFile << triangleVertices[i].vertex3().x() << " " << triangleVertices[i].vertex3().y() << " " << triangleVertices[i].vertex3().z() << std::endl;
        }

        cout << "Data extraction successful enter file path in GNU Plot!" << endl;

        readFromFile.close();
        WriteToFile.close();
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}
