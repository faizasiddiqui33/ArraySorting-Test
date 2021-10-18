
#include <iostream>

#include<math.h>

using namespace std;

/** Compute the sine of an angle in degrees.

    @param x The angle in degrees

    @return The sine of x

*/
int sin0to45(int);

int sin45to90(int);

int sin(int x) {

  if (x < 0) {

    x = -x;

  }

  x = x % 360;

  if (0 <= x && x <= 45) {

    return sin0to45(x);

  }

  else if (45 <= x && x <= 90) {

    return sin45to90(x);

  }

  else if (90 <= x && x <= 180) {

    return sin(180 - x);

  }

  else {

    return -sin(x - 180);

  }

}

/** Compute the cosine of an angle in degrees.

    @param x The angle in degrees

    @return The cosine of x

*/

int cos(int x) {

  return sin(x + 90);

}


int main()

{


    return 0;

}