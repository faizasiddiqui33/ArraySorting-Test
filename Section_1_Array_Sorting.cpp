
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

/*****************************************************************************************************************************
Module Name: Function for 1,000,000 random elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function for 1,000,000 random elements in an Array
    @param none
    @return the duration for 1,000,000 random elements in an Array
*****************************************************************************************************************************/
int million_elements_random_array()
{
    /// Initialize a vector of 1000000 elements
    vector<int> values(1000000);

    /// Generate random values
    auto f = []() -> int
    { return rand() % 1000000; };

    /// Fill up the vector
    generate(values.begin(), values.end(), f);

    /// Get starting timepoint
    auto start = high_resolution_clock::now();

    /// Call the function sort() here
    sort(values.begin(), values.end());

    /// Get ending timepoint
    auto stop = high_resolution_clock::now();

    /// Get the duration by subtracting stop time from start time
    auto duration = duration_cast<milliseconds>(stop - start);

    /// Return the time taken in integer
    return duration.count();
}

/*****************************************************************************************************************************
Module Name: Function for 1,000,000 ordered elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function for 1,000,000 ordered elements in an Array
    @param none
    @return integer data type that stores the duration for 1,000,000 ordered elements in an Array
*****************************************************************************************************************************/
int million_elements_ordered_array()
{
    /// for loop for storing values in array
    for (i = 1; i <= 1000000; i++)
    {
        values[i] = i;
    }

    /// Get number of elements in values[] array
    int n = sizeof(values) / sizeof(values[0]);

    /// Get starting timepoint
    auto start = high_resolution_clock::now();

    /// Call the sort() function here
    sort(values, values + n);

    /// Get ending timepoint
    auto stop = high_resolution_clock::now();

    /// Get the duration by subtracting stop time from start time
    auto duration = duration_cast<milliseconds>(stop - start);

    /// Return the time taken in integer data type
    return duration.count();
}

/*****************************************************************************************************************************
Module Name: Function for 1,000,000 reverse elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function for 1,000,000 reverse elements in an Array
    @param none
    @return integer data type that stores the duration for 1,000,000 reverse elements in an Array
*****************************************************************************************************************************/
int million_elements_reverse_array()
{
    /// for loop for storing 1000000 reverse elements in array
    for (i = 1000000; i >= 1; i--)
    {
        values[i] = i;
    }

    /// Get number of elements in values[] array
    int n = sizeof(values) / sizeof(values[0]);

    /// Get starting timepoint
    auto start = high_resolution_clock::now();

    /// Call the function, here sort()
    sort(values, values + n);

    /// Get ending timepoint
    auto stop = high_resolution_clock::now();

    /// Get the duration by subtracting stop time from start time
    auto duration = duration_cast<milliseconds>(stop - start);

    /// Return the time taken in integer data type
    return duration.count();
}

/*****************************************************************************************************************************
Module Name: Function for 1,000,000 random elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function for 1,000,000 random elements in an Array
    @param none
    @return integer data type that stores the duration for 1,000,000 random elements in an Array
*****************************************************************************************************************************/
int tenmillion_elements_random_array()
{
    /// Initialize a vector of 10000000 elements
    vector<int> values(10000000);

    /// generate random values
    auto f = []() -> int
    { return rand() % 10000000; };

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

    /// Return the time taken in integer data type
    return duration.count();
}

/*****************************************************************************************************************************
Module Name: Function for 10,000,000 ordered elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function for 10,000,000 ordered elements in an Array
    @param none
    @return integer data type that stores the duration for 10,000,000 ordered elements in an Array
*****************************************************************************************************************************/
int ten_million_elements_ordered_array()
{   
    /// for loop for storing 10000000 ordered elements in array
    for (i = 1; i <= 10000000; i++)
    {
        values[i] = i;
    }

    /// Get number of elements in values[] array
    int n = sizeof(values) / sizeof(values[0]);

    /// Get starting timepoint
    auto start = high_resolution_clock::now();

    /// Call the sort() function here
    sort(values, values + n);

    /// Get ending timepoint
    auto stop = high_resolution_clock::now();

    /// Get the duration by subtracting stop time from start time
    auto duration = duration_cast<milliseconds>(stop - start);

    /// Return the time taken in integer data type
    return duration.count();
}

/*****************************************************************************************************************************
Module Name: Function for 10,000,000 reverse elements in an Array
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
    Function for 10,000,000 reverse elements in an Array
    @param none
    @return integer data type that stores the duration for 10,000,000 reverse elements in an Array
*****************************************************************************************************************************/
int ten_million_elements_reverse_array()
{
    /// for loop for storing 10000000 reverse elements in array
    for (i = 10000000; i >= 1; i--)
    {
        values[i] = i;
    }

    /// Get number of elements in values[] array
    int n = sizeof(values) / sizeof(values[0]);

    /// Get starting timepoint
    auto start = high_resolution_clock::now();

    /// Call the sort() function here
    sort(values, values + n);

    /// Get ending timepoint
    auto stop = high_resolution_clock::now();

    /// Get the duration by subtracting stop time from start time
    auto duration = duration_cast<milliseconds>(stop - start);

    /// Return the time taken in integer data type
    return duration.count();
}
/*****************************************************************************************************************************
Module Name: Main Function
Author: Faiza Fatma Siddiqui
Date Created/Modified:17.10.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 2 
 Function to print time durations of every sort performed on arrays of different sizes
    @param none
    @return 0 is the return value, if no error & non-zero if there is error
*****************************************************************************************************************************/
int main()
{
    /// Arrays for storing 10 time durations of hundred thousand elements in random, ordered and reverse form
    int hundred_random[10], hundred_ordered[10], hundred_reverse[10];

    /// Arrays for storing 10 time durations of million elements in random, ordered and reverse form
    int million_random[10], million_ordered[10], million_reverse[10];

    /// Arrays for storing 10 time durations of ten million elements in random, ordered and reverse form
    int ten_million_random[10], ten_million_ordered[10], ten_million_reverse[10];

    /// Start the test for 100000 elements
    start_test(100000);

    /// for loop for storing 10 time durations of hundred thousand elements in random, ordered and reverse form
    for (int i = 1; i <= 10; i++)
    {
        /// Storing 10 time durations of hundred thousand elements in random order
        hundred_random[i] = hundred_thousand_random();

        /// Storing 10 time durations of hundred thousand elements in ordered way
        hundred_ordered[i] = hundred_thousand_ordered();

        /// Storing 10 time durations of hundred thousand elements in reverse order
        hundred_reverse[i] = hundred_thousand_reverse();
    }
    /// Stop the test for 100000 elements
    stop_test(100000);

    /// Start the test for 1000000 elements
    start_test(1000000);

    /// for loop for storing 10 time durations of million elements in random, ordered and reverse form
    for (int i = 1; i <= 10; i++)
    {
        /// Storing 10 time durations of million elements in random order
        million_random[i] = million_elements_random_array();

        /// Storing 10 time durations of million elements in ordered way
        million_ordered[i] = million_elements_ordered_array();

        /// Storing 10 time durations of million elements in reverse order
        million_reverse[i] = million_elements_reverse_array();
    }

    /// Stop the test for million elements
    stop_test(1000000);

    /// Start the test for 10000000 elements
    start_test(10000000);

    /// for loop for storing 10 time durations of ten million elements in random, ordered and reverse form
    for (int i = 1; i <= 10; i++)
    {
        /// Storing 10 time durations of million elements in random order
        ten_million_random[i] = tenmillion_elements_random_array();

        /// Storing 10 time durations of million elements in ordered way
        ten_million_ordered[i] = ten_million_elements_ordered_array();

        /// Storing 10 time durations of million elements in reverse order
        ten_million_reverse[i] = ten_million_elements_reverse_array();
    }

    /// Stop the test for ten million elements
    stop_test(10000000);

    /// printing heading for well-formatted console output
    cout << "============== Printing Sort Duration in milliseconds for 10 Arrays of size 100,000 each ==============" << endl;

    /// printing a line for well-formatted console output
    line();
    
    /// Printing the name of test, i.e. the order of the Array - Random
    cout << "|RANDOM \t|";

    /// for printing time duration of Arrays of size 100,000 in random order
    for (int i = 1; i <= 10; i++)
    {
        cout << hundred_random[i] << "ms\t|";
    }

    cout << endl;

    /// Printing the name of test, i.e. the order of the Array - Ordered
    cout << "|ORDERED\t|";

    /// for printing time duration of Arrays of size 100,000 in ordered way
    for (int i = 1; i <= 10; i++)
    {
        cout << hundred_ordered[i] << "ms\t|";
    }

    cout << endl;

    /// Printing the name of test, i.e. the order of the Array - Reverse
    cout << "|REVERSE\t|";

    /// for printing time duration of Arrays of size 100,000 in reverse way
    for (int i = 1; i <= 10; i++)
    {
        cout << hundred_reverse[i] << "ms\t|";
    }

    cout << endl;

    /// printing a line for well-formatted console output
    line();

    /// printing heading for well-formatted console output
    cout << "============= Printing Duration in milliseconds for 10 Arrays of size 1,000,000 each ==============" << endl;

    //display();

    /// printing a line for well-formatted console output
    line();

    /// printing name of Array order test for well-formatted console output
    cout << "|RANDOM \t|";

    /// for printing time duration of 10 Arrays of size 1,000,000 in random order
    for (int i = 1; i <= 10; i++)
    {
        cout << million_random[i] << "ms\t|";
    }

    cout << endl;

    /// printing name of Array order test for well-formatted console output
    cout << "|ORDERED\t|";

    /// for printing time duration of 10 Arrays of size 1,000,000 in ordered way
    for (int i = 1; i <= 10; i++)
    {
        cout << million_ordered[i] << "ms\t|";
    }

    cout << endl;

    /// printing name of Array order test for well-formatted console output
    cout << "|REVERSE\t|";

    /// for printing time duration of 10 Arrays of size 1,000,000 in reverse order
    for (int i = 1; i <= 10; i++)
    {
        cout << million_reverse[i] << "ms\t|";
    }

    cout << endl;

    /// printing a line for well-formatted console output
    line();

    /// printing heading for well-formatted console output
    cout << "============== Printing Duration in milliseconds for 10 Arrays of size 10,000,000 each ==============" << endl;

    //display();

    /// printing a line for well-formatted console output
    line();

    /// printing name of Array order test for well-formatted console output
    cout << "|RANDOM \t|";

    /// for printing time duration of 10 Arrays of size 10,000,000 in random order
    for (int i = 1; i <= 10; i++)
    {
        cout << ten_million_random[i] << "ms\t|";
    }

    cout << endl;

    /// printing name of Array order test for well-formatted console output
    cout << "|ORDERED\t|";

    /// for printing time duration of 10 Arrays of size 10,000,000 in ordered way
    for (int i = 1; i <= 10; i++)
    {
        cout << ten_million_ordered[i] << "ms\t|";
    }

    cout << endl;

    /// printing name of Array order test for well-formatted console output
    cout << "|REVERSE\t|";

    /// for printing time duration of 10 Arrays of size 10,000,000 in reverse order
    for (int i = 1; i <= 10; i++)
    {
        cout << ten_million_reverse[i] << "ms\t|";
    }

    cout << endl;

    /// printing a line for well-formatted console output
    line();

    ///return 0 if program executed successfully because main function is of type integer
    return 0;
}