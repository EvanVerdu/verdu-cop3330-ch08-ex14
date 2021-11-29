#include "iostream"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Evan Verdu
 */


/*
Can we declare a non-reference function argument const (e.g., void
f(const int);)? What might that mean? Why might we want to do that?
Why don’t people do that often? Try it; write a couple of small programs
to see what works.
*/


//Yes it is possible to declare a non-reference function argument const, it compiles just fine.
//This means that the function can't modify its parameter within the function.
//This would be used mainly to show that the parameter can't be modified.
//People don't use it often because many times, the parameters need to be edited or changed which wouldn't be possible.
  



// TEST 1
// *Testing if i can be changed within the function?*



/* REMOVE THIS TO TRY TEST 1

void Test1(const int i){
 i = 1;

}


int main(){

    int i = 0;

    std::cout << i << "\n";

    Test1(i);

    std::cout << i;


    return 0;
}

REMOVE THIS TO TRY TEST 1 */
 
//No it doesn't work, the compiler says:
//"error: assignment of read-only parameter 'i'
//So the parameter cannot be changed when using const int as a paremeter.




// TEST 2
// Testing if i could be applied to a different value.

/* REMOVE THIS TO TRY TEST 2

int Test1(const int i){
 
   int j = i + 2;

   return j;
}


int main(){

    int i = 0;
    int j = 0;

    std::cout << "j = " << "0" << "\n";

    j = Test1(i);

    std::cout << "j + 2 = " << j;


    return 0;
}

REMOVE THIS TO TRY TEST 2 */

//It does compile, so in this case i can be used as a value for different operations as long as i isn't changed within the function


//So what can be seen from these tests is that any attempt to change the parameter is rejected by the compiler,
//but using it as a part of an operation such as int j = (const int i) + 2 works just fine. 

