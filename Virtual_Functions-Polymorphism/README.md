# Virtual Functions and Polymorphism

### Tip
When creating a base class that acts as a general class, focus on the functionality not the attributes of the interface.<br>
For example, create a base class of automobiles and have a common method of the functionality *driving*.<br>
This method may recieve the number of wheels and the wheel structure. However, it will not need a certain amount of wheels.<br>
What I mean by this is, create it so it overlaps all vehicles (motorcycle, car, truck, etc.) not just one type (e.g. cars(4 wheels)).<br>
So I would tend to use *virtual* functions rather than overriding. Personally, I think too much overriding makes the derived class veer away from the base class.
