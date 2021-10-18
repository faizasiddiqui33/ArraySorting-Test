///algorithms library defines functions for searching, sorting, counting, manipulating, etc. that operate on ranges of elements
#include <algorithm>

///chrono library deals with time, by means of clocks, time points, durations
#include <chrono>

/// Library for input output capabilities
#include <iostream>

///to use vectors, that is a sequence container that encapsulates dynamic size arrays
#include <vector>

/// tells the compiler to make all the names in the predefined standard library available to our program
using namespace std;

/// to use the time interval - All the elements are not defined directly under the std namespace, but under the std::chrono namespace
using namespace std::chrono;

/// values array for storing random values & i is for loop iterations
long int values[10000000], i;

/*****************************************************************************************************************************
Module Name: Function to print the starting point of sort testing of Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function to notify the start of testing of Array
    @param n The array size to be tested
    @return null
*****************************************************************************************************************************/
void start_test(int n)

{
    cout << "*****Sort Testing for " << n << " array size STARTS NOW*****"<< endl;
}

/*****************************************************************************************************************************
Module Name: Function to print the ending point of sort testing of Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function to notify the end of testing of Array
    @param n The array size to be tested
    @return null
*****************************************************************************************************************************/
void stop_test(int n)

{
    cout << "*****Sort Testing for " << n << " array size ENDS NOW*****"<< endl;
    cout << endl;
}

/*****************************************************************************************************************************
Module Name: Function to print lines
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function to print a line for well formatted output in tabular form
    @param none
    @return null
*****************************************************************************************************************************/
void line()
{
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n" << endl;
}
/*****************************************************************************************************************************
Module Name: Function for 100,000 random elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function for 100,000 random elements in an Array
    @param none
    @return the duration for generating 100,000 random elements in an Array
*****************************************************************************************************************************/
int hundred_thousand_random()
{
    /// Initialize a vector of 100000 elements
    vector<int> values(100000);

    /// Generate random values
    auto f = []() -> int
    { return rand() % 100000; };

    /// Fill up the vector
    generate(values.begin(), values.end(), f);

    /// Get starting timepoint
    auto start = high_resolution_clock::now();

    /// Call the function, here sort()
    sort(values.begin(), values.end());

    /// Get ending timepoint
    auto stop = high_resolution_clock::now();

    /// Get the duration by subtracting stop time from start time
    auto duration = duration_cast<milliseconds>(stop - start);
    
    /// Return the time taken in integer
    return duration.count();
}

/*****************************************************************************************************************************
Module Name: Function for 100,000 ordered elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function for 100,000 ordered elements in an Array
    @param none
    @return the duration for sorting 100,000 elements in an Array
*****************************************************************************************************************************/
int hundred_thousand_ordered()
{
    /// for loop for storing values in array
    for (i = 1; i <= 100000; i++)
    {
        values[i] = i;
    }

    /// Get number of elements in values[] array
    int n = sizeof(values) / sizeof(values[0]);

    /// Get starting timepoint
    auto start = high_resolution_clock::now();

    /// Call the sort function here
    sort(values, values + n);

    /// Get ending timepoint
    auto stop = high_resolution_clock::now();

    /// Get the duration by subtracting stop time from start time
    auto duration = duration_cast<milliseconds>(stop - start);

   /// Return the time taken in integer
    return duration.count();
}


/*****************************************************************************************************************************
Module Name: Function for 100,000 reverse elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
  Function for 100,000 reverse elements in an Array
    @param none
    @return the duration for 100,000 reverse elements in an Array
*****************************************************************************************************************************/
int hundred_thousand_reverse()
{ 
    /// for loop for reversing values in array
    for (i = 100000; i >= 1; i--)
    {
        values[i] = i;
    }

    /// Get number of elements in values[] array
    int n = sizeof(values) / sizeof(values[0]);

    /// Get starting timepoint
    auto start = high_resolution_clock::now();

    /// Call the function sort() here
    sort(values, values + n);

    /// Get ending timepoint
    auto stop = high_resolution_clock::now();

    /// Get the duration by subtracting stop time from start time
    auto duration = duration_cast<milliseconds>(stop - start);

    /// Return the time taken in integer
    return duration.count();
}


int main()
{
    /// Arrays for storing 10 time durations of hundred thousand elements in random, ordered and reverse form
    int hundred_random[10], hundred_ordered[10], hundred_reverse[10];

    /// Arrays for storing 10 time durations of million elements in random, ordered and reverse form
    int million_random[10], million_ordered[10], million_reverse[10];

    /// Arrays for storing 10 time durations of ten million elements in random, ordered and reverse form
    int ten_million_random[10], ten_million_ordered[10], ten_million_reverse[10];

    /// printing heading for well-formatted console output
    cout << "============== Printing Sort Duration in milliseconds for 10 Arrays of size 100,000 each ==============" << endl;

    
    /// Printing the name of test, i.e. the order of the Array - Random
    cout << "|RANDOM \t|";

     cout << endl;

    /// Printing the name of test, i.e. the order of the Array - Ordered
    cout << "|ORDERED\t|";


    /// Printing the name of test, i.e. the order of the Array - Reverse
    cout << "|REVERSE\t|";

    cout << endl;

     /// printing heading for well-formatted console output
    cout << "============= Printing Duration in milliseconds for 10 Arrays of size 1,000,000 each ==============" << endl;


    /// printing name of Array order test for well-formatted console output
    cout << "|RANDOM \t|";

    cout << endl;

    /// printing name of Array order test for well-formatted console output
    cout << "|ORDERED\t|";

  

    cout << endl;

    /// printing name of Array order test for well-formatted console output
    cout << "|REVERSE\t|";

    cout << endl;

    /// printing heading for well-formatted console output
    cout << "============== Printing Duration in milliseconds for 10 Arrays of size 10,000,000 each ==============" << endl;

    //display();


    /// printing name of Array order test for well-formatted console output
    cout << "|RANDOM \t|";


    cout << endl;

    /// printing name of Array order test for well-formatted console output
    cout << "|ORDERED\t|";

    cout << endl;

    /// printing name of Array order test for well-formatted console output
    cout << "|REVERSE\t|";

    cout << endl;

    ///return 0 if program executed successfully because main function is of type integer
    return 0;
}