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
