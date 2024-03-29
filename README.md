# CPP-Project3 (Read STL Files)

This project focuses on reading 3D triangular mesh data from STL files and writing the extracted information into a text file. The program is designed to handle 3D data, where each triangle is defined by three vertices and a normal vector.

## Features

- Read 3D triangular mesh data from STL files.
- Extract vertices and normal vectors of each triangle.
- Write the extracted data into a text file.
- Plot the 3D shapes using GNU Plot.

## Requirements

- C++ compiler with C++11 support.
- GNU Plot for visualizing the 3D shapes.

## Steps

1. Add a new variable for the z-coordinate in the `Point` class to represent 3D points.
2. Write a function to extract data from the STL file and store it in a vector. This vector should contain objects representing the triangles.
3. Use GNU Plot to plot the 3D shapes based on the extracted data.
