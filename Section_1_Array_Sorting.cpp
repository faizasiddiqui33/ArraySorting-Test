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