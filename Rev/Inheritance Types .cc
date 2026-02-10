#include <iostream>
using namespace std;

                     // Multi Level Inheritance  ///
// super class --> one super class , many sub classes
class clsX
{
};

class clsY : clsX
{
}; // sub class of super class clsX

class clsZ : clsY
{
}; // sub class of super class clsY

                  /// Single Inheritance ///

// super
class clsF
{};

// sub 
class clsK : clsF{};

                              // Hierachial Inheritance 

class Super {};

class Sub1: Super {};
class Sub2 : Super {};
class Sub3 : Super{} ;

                                 // Multiple Inhertiance

class Super1{};
class Super2{};

class Sub : Super1 , Super2 {};


                          // Hybrid Inheritance
   class SUPER {};
   class SUB1 : SUPER {};
   class SUB2 : SUPER {};
   
   class hybrid : SUB1 , SUB2 {}; 

   