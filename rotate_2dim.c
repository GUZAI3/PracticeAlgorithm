#include <math.h>
#include <stdio.h>

int main() {
  double X, Y;    // Original coordinates
  double Xc, Yc;  // Center coordinates or rotation
  double Xr, Yr;  // Coordinates after rotation
  double angle;   // Angle of rotation (Radian)

  X = 5.0, Y = 3.0, Xc = 6.0, Yc = 3.5;  // Example of coordinates
  angle = 2.0 * acos(-1) / 6;            // Example of angle (60 deg)

  // Calculate rotation
  Xr = (X - Xc) * cos(angle) - (Y - Yc) * sin(angle) + Xc;
  Yr = (X - Xc) * sin(angle) + (Y - Yc) * cos(angle) + Yc;

  printf("Xr=%lf, Yr=%lf\n", Xr, Yr);  // Xr = 5.933, Yr = 2.384

  return 0;
}