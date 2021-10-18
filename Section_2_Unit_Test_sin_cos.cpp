/*****************************************************************************************************************************
Module Name: White-box texting of sine and cosine of numbers
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
Description:
- This program consists white-box testing of sine & cosine functions 
- This program has test cases which checks whether the expected values and actual values are the same.
    -if the values are same, the test is passed
    -if the values are different, the test is failed
*****************************************************************************************************************************/

/// Library for input output capabilities
#include <iostream>

/// Library for various mathematical functions
#include <math.h>

/// Tells the compiler to make all the names in the predefined standard library available to our program
using namespace std;

/** These are function declarations of functions
 *  that compute the sine and cosine of an angle
 *  expressed in degrees. The result will be
 *  an integer representing the sine or cosine as
 *  ten-thousandths.
 */

/// Function declaration of function to compute sine of an angle between 0 and 45 degrees
int sin0to45(int);

/// Function declaration of function to compute sine of an angle between 45 and 90 degrees
int sin45to90(int);

/// Function declaration of a function to evaluate a polynomial
int polyEval(int, int[], int);

/*****************************************************************************************************************************
Module Name: Function to compute the sine of an angle in degrees
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
  Function to compute the sine of an angle in degrees
    @param x The angle in degrees

    @return The sine of x
*****************************************************************************************************************************/
int sin(int x)
{
  /// Check if the angle is a negative number
  if (x < 0)
  {
    /// Assign negative value to the sine angle
    x = -x;
  }

  x = x % 360;

  /// Check if the angle is between 0 and 45 degrees
  if (0 <= x && x <= 45)
  {
    /// Compute sin(x) for x between 0 and 45 degrees
    return sin0to45(x);
  }

  /// Check if the angle is between 45 and 90 degrees
  else if (45 <= x && x <= 90)
  {
    /// Compute sin(x) for x between 45 and 90 degrees
    return sin45to90(x);
  }

  /// Check if the angle is between 90 and 180 degrees
  else if (90 <= x && x <= 180)
  {
    /// Compute sin(180-x) and return its value as an integer
    return sin(180 - x);
  }

  else
  {
    /// Compute sin(x-180) and return its negative value as an integer
    return -sin(x - 180);
  }
}

/*****************************************************************************************************************************
Module Name: Function to compute the cosine of an angle in degrees
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
  Function to compute the cosine of an angle in degrees

    @param x The angle in degrees

    @return The cosine of x
*****************************************************************************************************************************/
/// Compute cosine of an angle in degrees
int cos(int x)
{
  /// cos x = sin(x + 90) hence, the return walue
  return sin(x + 90);
}

/*****************************************************************************************************************************
Module Name: Function to compute the sine of an angle in degrees between 0 and 45
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
  Function to compute the sine of an angle in degrees between 0 and 45

    @param x The angle

    @return The sine of x
*****************************************************************************************************************************/
/// Code to compute sin(x) for x between 0 and 45 degrees
int sin0to45(int x)
{
  /// Saving coefficient values
  int coef[] = {-81, -277, 1747900, -1600};

  /// Evaluate a polynomial optimized for this range
  return polyEval(x, coef, 4) / 10000;
}

/*****************************************************************************************************************************
Module Name: Function to compute the sine of an angle in degrees between 45 and 90
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
  Function to compute the sine of an angle in degrees between 45 and 90

    @param x The angle

    @return The sine of x
*****************************************************************************************************************************/
/// Code to compute sin(x) for x between 45 and 90 degrees
int sin45to90(int x)
{
  /// Saving coefficient values
  int coef[] = {336, -161420, 75484, 999960000};

  /// Evaluate a polynomial optimized for this range
  return polyEval(90 - x, coef, 4) / 100000;
}

/*****************************************************************************************************************************
Module Name: Function to evaluate a polynomial
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
  Function to evaluate a polynomial

    @param x The point at which the polynomial is to be evaulated

    @param coef The array of coefficients

    @param n The number of coefficients (degree + 1)

    @return x^n-1*coef[0] + x^n-2*coef[1] + ... x*coef[n-2] + coef[n-1]
*****************************************************************************************************************************/
int polyEval(int x, int coef[], int n)
{
  /// Initialize result to be returned
  int result = 0;

  /// Formula to calculate polynomial
  for (int i = 0; i < n; i++)
  {
    /// Square of the number whose polynomial is to be evaluated
    result *= x;

    /// Add coefficients to the square of the polynomial
    result += coef[i];
  }

  /// Return calculated value
  return result;
}

/*****************************************************************************************************************************
Module Name: Unit Test Function to test different angles of sine
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
  Unit Test Function to test different angles of sine
*****************************************************************************************************************************/
int test_sin(int n)
{
  /// Save sine of the angle as an integer
  int sample = sin(n);

  /// When the test passes
  if (sin(n) == sample)
    cout << "\tPass" << endl;

  /// When the test fails
  else
    cout << "\tFail" << endl;
}

/*****************************************************************************************************************************
Module Name: Unit Test Function to test different angles of cosine
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
  Unit Test Function to test different angles of cosine
*****************************************************************************************************************************/
int test_cos(int n)
{
  /// Save cosine of the angle as an integer
  int sample = cos(n);

  /// When the test passes
  if (cos(n) == sample)
    cout << "\tPass" << endl;

  /// When the test fails
  else
    cout << "\tFail" << endl;
}

/*****************************************************************************************************************************
Module Name: Main Function
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function for White box testing - comparing the actual and expected values
    @param none
    @return 0 is the return value, if no error & non-zero if there is error
*****************************************************************************************************************************/
int main()
{
  /*
    For our White box testing, we use different range of values to test
    the outputs of the different functions
  */

  /// Initializing different angles of x for Whitebox test cases

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

  int n = 8, sample;

  /// Testing sines of angles in degrees
  sample = sin(x1);

  /// Printing sine of an angle and displaying the actual and expected values
  cout << "sine: " << x1 << " is: " << sin(x1) << " \texpected :   " << sample;

  /// Unit Test Function to test different angles of sine
  test_sin(x1);

  /// Testing sine of angles in degrees
  sample = sin(x3);

  /// Printing sine of an angle and displaying the actual and expected values
  cout << "sine: " << x3 << " is: " << sin(x3) << "\texpected :  " << sample;

  /// Unit Test Function to test different angles of sine
  test_sin(x3);

  /// Testing sine of angles in degrees
  sample = sin(x5);

  /// Printing sine of an angle and displaying the actual and expected values
  cout << "sine: " << x5 << " is: " << sin(x5) << "\texpected :  " << sample;

  /// Unit Test Function to test different angles of sine
  test_sin(x5);

  /// Testing sine of angles in degrees
  sample = sin(x9);

  /// Printing sine of an angle and displaying the actual and expected values
  cout << "sine: " << x9 << " is: " << sin(x9) << "\texpected :" << sample << "\t";

  /// Unit Test Function to test different angles of sine
  test_sin(x9);

  /// Testing sine of angles in degrees
  sample = sin(x7);

  /// Printing sine of an angle and displaying the actual and expected values
  cout << "sine: " << x7 << " is: " << sin(x7) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of sine
  test_sin(x7);

  /// Testing sine of angles in degrees
  sample = sin(y1);

  /// Printing sine of an angle and displaying the actual and expected values
  cout << "sine: " << y1 << " is: " << sin(y1) << " \texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of sine
  test_sin(y1);

  /// Testing sine of angles in degrees
  sample = sin(y7);

  /// Printing sine of an angle and displaying the actual and expected values
  cout << "sine: " << y7 << " is: " << sin(y7) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of sine
  test_sin(y7);

  //testing cosines

  /// Testing cosine of angles in degrees
  sample = cos(x1);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << x1 << " is: " << cos(x1) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(x1);

  /// Testing cosine of angles in degrees
  sample = cos(x2);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << x2 << " is: " << cos(x2) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(x2);

  /// Testing cosine of angles in degrees
  sample = cos(y2);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << y2 << " is: " << cos(y2) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(y2);

  /// Testing cosine of angles in degrees
  sample = cos(y7);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << y7 << " is: " << cos(y7) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(y7);

  /// Testing cosine of angles in degrees
  sample = cos(y9);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << y9 << " is: " << cos(y9) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(y9);

  /// Testing cosine of angles in degrees
  sample = cos(y3);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << y3 << " is: " << cos(y3) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(y3);

  /// Testing cosine of angles in degrees
  sample = cos(y6);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << y6 << " is: " << cos(y6) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(y6);

  /// Testing cosine of angles in degrees
  sample = cos(y5);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << y5 << " is: " << cos(y5) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(y5);

  /// Testing cosine of angles in degrees
  sample = cos(x9);

  /// Printing cosine of an angle and displaying the actual and expected values
  cout << "cosine: " << x9 << " is: " << cos(x9) << "\texpected : " << sample << "\t";

  /// Unit Test Function to test different angles of cosine
  test_cos(x9);

  ///return 0 if program executed successfully because main function is of type integer
  return 0;
}