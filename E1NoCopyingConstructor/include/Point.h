//
// Created by filip on 07.11.2021.
//

#ifndef CHECKER_POINT_H
#define CHECKER_POINT_H

#include <iostream>

using namespace std;

class Point {
private:
    double *x;
    double *y;
    string name;

public:

    Point()
    {
        x = new double;
        y = new double;
    }
    Point(Point &point){
        x = point.x;
        y = point.y;
    }

    ~Point()
    {
        delete x;
        delete y;
    }

    /**
     * Update name of point
     * @param name new point name
     */
    void setName(string name);

    /**
     * Get value of x
     * @return x
     */
    double getX();

    /**
     * Update x value
     * @param x new x value
     */
    void setX(double x);

    /**
     * Get value of y
     * @return y
     */
    double getY();

    /**
     * Update y value
     * @param y new y value
     */
    void setY(double y);

    /**
     * Print data about point (x and y)
     */
    void printData() const;

    bool operator==(const Point &rhs) const;

    bool operator!=(const Point &rhs) const;

    Point operator+=(const Point &rhs) const;

    Point operator+=(const double &rhs) const;

    const string &getName() const;

};


#endif //CHECKER_POINT_H
