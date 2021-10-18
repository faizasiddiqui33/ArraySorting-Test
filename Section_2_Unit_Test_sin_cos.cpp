
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

/** Compute the sine of an angle in degrees

    between 0 and 45.

    pre: 0 <= x < 45

    @param x The angle

    @return The sine of x

*/


/** Function to evaluate a polynomial

    @param x The point at which the polynomial is to be evaulated

    @param coef The array of coefficients

    @param n The number of coefficients (degree + 1)

    @return x^n-1*coef[0] + x^n-2*coef[1] + ... x*coef[n-2] + coef[n-1]

*/


/** Compute the sine of an angle in degrees

    between 0 and 45.

    pre: 0 <= x < 45

    @param x The angle

    @return The sine of x

*/

int sin0to45(int x) {

  // Code to compute sin(x) for x between 0 and 45 degrees

  // Evaluate a polynomial optimized for this range.

  int coef[] = {

    -81, -277, 1747900, -1600};

  return polyEval(x, coef, 4) / 10000;

}

/** Compute the sine of an angle in degrees

    between 45 and 90.

    pre: 45 <= x <= 90

    @param x The angle

    @return The sine of x

*/

int sin45to90(int x) {

  // Code to compute sin(x) for x between 45 and 90 degrees

  // Evaluate a polynomial optimized for this range.

  int coef[] = {

    336, -161420, 75484, 999960000};

  return polyEval(90 - x, coef, 4) / 100000;

}

int polyEval(int x, int coef[], int n) {

  int result = 0;

  for (int i = 0; i < n; i++) {

    result *= x;

    result += coef[i];

  }

  return result;

}

int test_sin(int n)

{

    int sample = sin(n);

    if (sin(n)==sample)

        cout<<"\tPass"<<endl;

    else cout<<"\tFail"<<endl;

}

int test_cos(int n)

{

    int sample = cos(n);

    if (cos(n)==sample)

        cout<<"\tPass"<<endl;

    else cout<<"\tFail"<<endl;

}


int main()

{
  /*

    for our white box testing, we use different range of values to test

        the outputs of the different functions



    */

    //whitebox test cases



    int x = 33;

    int x1 = 5.9;

    int x2 = 60;

    int x3 = 100;

    int x4 = 120;

    int x5 = 90;

    int x6 = 70;

    int x7 = 45;

    int x8 = 180;

    int x9 = -240;

    int y1 = 360;

    int y2 = 67;

    int y3 = 92;

    int y4 = 69;

    int y5 = -28;

    int y6 = 40;

    int y7 = 12;

    int y8 = 37;

    int y9 = -25.00;

    int z1[] = {10, 0, 35, 45, 60, 90, 75};

    int n = 8, sample;




    return 0;

}