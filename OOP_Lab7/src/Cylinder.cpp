# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <bits/stdc++.h>

#define pi 3.141592653589793

double Cylinder :: SurfaceArea(){
  double one = 2.0 * pi * radius * height;
  double two = 2.0 * pi * radius * radius;
  return (one + two);
}

double Cylinder :: Volume(){
  return (pi * radius * radius * height);
}

double Cylinder :: Circumference(){
  return (2.0 * pi * radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
  int one, two;
  in >> one >> two;
  cldr.radius = one;
  cldr.height = two;
  return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
  double s = cldr.SurfaceArea();
  double v = cldr.Volume();
  double c = cldr.Circumference();
  out << "Circumference: " << fixed << std::setprecision(3) << c << endl;  
  out << "SurfaceArea: " << fixed << std::setprecision(3) << s << endl;
  out << "Volume: " << fixed << std::setprecision(3) << v << endl;
  return out;
}

# endif
