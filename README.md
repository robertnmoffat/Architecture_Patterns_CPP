# Description
This project was created as an exercise in working through common software design patterns in C++.  
Each pattern is represented by a class which implements a Pattern interface. The main function then iterates through an array containing all of the patterns and calls their demoPattern() function to demonstrate pattern functionality.
Each pattern class is contained within the Patterns folder, and each non-pattern class is located within the Other folder.

## Factory Pattern
The factory pattern encapsulates the creation of related objects within a Factory class. These objecs all implement a shared interface in order to reduce coupling making it easier to alter classes and create new ones in the future.
The example factory created in this project produces Animal objects. Each Animal object implements an Animal interface which contains a makeSound() function to be customized by each class implementation.
There are two classes in this project which implement the Animal interface: Cat and Dog.  
Example printout from the Factory implementation:  
<sub>
Requesting 'Cat' object from factory...  
Calling .makeSound() on returned Animal...  
Meow  
Requesting 'Dog' object from factory...  
Calling .makeSound() on returned Animal...  
Woof  
</sub>

## Builder Pattern
The Builder pattern simplifies complex object creation. When creating an object with what would be a cumbersome amount of optional constructor parameters the Builder pattern instead uses a Builder class which contains many optional functions to set the parameters. In doing this an object which would utilize few of the optional creation parameters can be created simply without passing many null values or zeros.  
Example printout from the Builder implementation:  
<sub>
Creating house: House* house = builder->withDoors(2)->withWalls(4)->withWindows(3)->getResult();  
Returned house results in:   
This house has: 2 doors, 4 walls, 3 windows.  
</sub>

## Singleton Pattern
The Singleton pattern ensures that only one single object can exist at runtime of the Singleton class. This is achieved through the use of a private constructor and private static reference to the single object. In this example a FakeDB class is made as a Singleton. Instead of calling new FakeDB() which is private, the user must use FakeDB::getInstance() which restricts the class to a single object.  
After assigning the return of FakeDB::getInstance() to two separate pointers we get:  
<sub>
DB1 mem address: 0x55ccd74cc3c0  
DB2 mem address: 0x55ccd74cc3c0  
</sub>  
Which shows that both pointers are referencing the same memory address, and so the same object.  

## Adapter Pattern
This pattern is meant to facilitate interfacing between two incompatible objects. Commonly used to interface new software with existing legacy software.  
An example use of this pattern would be to use an adapter to convert json input to xml to communicate with existing software which only accepts xml input.  
This example uses an IntRequestor class which requests random integers from an IntGenerator object. The StrIntAdapter extends IntGenerator while taking a StrIntGenerator as a parameter. The StrIntAdapter converts string output from StrIntGenerator to integer numbers to be used by the IntRequestor.  
The output of this example is:  
<sub>
--Passing IntGenerator to IntRequestor--  
New IntRequestor requesting int...  
IntGenerator producing random int: 8  
Int received: 8  
--Example of string generation--  
StrIntGenerator producing random int string: Two  
--Passing StrIntGenerator to StrIntAdapter, then passing the adapter to IntRequestor--  
New IntRequestor requesting int...  
StrIntGenerator producing random int string: Eight  
StrIntAdapter converting string: Eight to integer: 8  
Int received: 8  
</sub>
