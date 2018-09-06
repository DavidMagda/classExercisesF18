In this folder, modify a copy of your greetings program to work with some numeric data. Use appropriate variables to store and display the name and age values that the user inputs. It should behave as follows.

```
Enter your name: Dave
Enter your age: 20
Hello, Dave! How do you like being 20 years old?
```

Answer the following questions, then commit your work and create a PR.

**1.  Does your toolset/PL allow implicit declarations? If so, can you turn that off?**
Ruby gives a warning when it detects the implicit declaration of a function


**2. Does your PL allow you to define a variable as you declare it? Can you do this close to the variable's first use, or must it be at the top? Give an example that illustrates your answers.**
Yes, a good example of this is 
***name = gets.chomp***


**3. Does your toolset allow you to filter warning messages? If so, show how to turn on all warnings.**
there aren’t many if any warnings able to be filtered out in RubyMine IDE


**4. What levels of scope does your PL have? See the top of p. 245 for examples from a few PLs.**
Global, Instance, Class, Local


**5. What features does your PL have for allocating memory dynamically? How is this memory returned to the system?**
Memory is constantly being cycled between use and the heap while keeping references to certain unused objects to use them later when needed.
