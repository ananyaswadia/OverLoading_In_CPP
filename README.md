# OverLoading_In_CPP
## Aim 
To study and implement different overloading methods in C++.
## Theory & Algorithms
### Operator Overloading
C++ has the ability to provide the operators with a special meaning for particular data type, this ability is known as operator overloading. For example, we can make use of the addition operator (+) for string to concatenate two strings and for integer to add two integers. The << and >> operator are binary shift operators but are also used with input and output streams. This is possible due to operator overloading. 

1. Start.

2. Create a class BankAccount with data member balance.

3. Define constructor to initialize balance.

4. Overload operator + to add balances of two objects.

5. In main(), create two objects a1 and a2 with initial balances.

6. Add objects using a1 + a2 → returns new object with combined balance.

7. Display result using show().

8. End.

### Constructor Overloading
Constructor overloading in C++ allows a class to have multiple constructors, each with a distinct signature. The signature of a constructor is determined by the number, type, and order of its parameters. This flexibility enables objects of the class to be initialized in various ways, depending on the specific arguments provided during object creation. 

1. Start.

2. Create class Ticket with members: movie, seat, price.

3. Define three constructors (overloaded):
4. Default constructor → assigns default values. Constructor with movie → assigns movie name, sets default seat and price. Constructor with movie, seat, price → assigns all values.

4. In main(), create objects using different constructors.

5. Call showTicket() to display ticket details.

6. End.

### Function Overloading
Function overloading is a feature of object-oriented programming where two or more functions can have the same name but behave differently for different parameters. Such functions are said to be overloaded; hence, this is known as Function Overloading. Functions can be overloaded either by changing the number of arguments or changing the type of arguments.

1. Start.

2. Create class Bill with overloaded functions bill() and bill_taxed().

3. bill() → calculates total price without tax. And bill_taxed() → calculates total price with tax.

4. Overload each with int and double parameter types.

5. In main(), create objects of Bill.

6. Call bill() → compute total cost of items and Call bill_taxed() → compute cost including tax.

7. Display results.

8. End.
   
## Conclusion
We learnt to use 3 different methods on overloading in C++.
