In this folder, modify a copy of your greetings program to work with some numeric data. Use appropriate variables to store and display the name and age values that the user inputs. It should behave as follows.

```
Enter your name: Dave
Enter your age: 20
Hello, Dave! How do you like being 20 years old?
```

Answer the following questions, then commit your work and create a PR.

**1.  Does your toolset/PL allow implicit declarations? If so, can you turn that off?**

no c++ does not allow.

**2. Does your PL allow you to define a variable as you declare it? Can you do this close to the variable's first use, or must it be at the top? Give an example that illustrates your answers.**

Yes it does, you could do it close to the variable.
```
int i = 3;
int g = 2;
int j = i + g;
cout j would give you 5.
```

**3. Does your toolset allow you to filter warning messages? If so, show how to turn on all warnings.**

Yes c9 allows to filter warning messages. 


**4. What levels of scope does your PL have? See the top of p. 245 for examples from a few PLs.**

in c++ a variable can be visible to a block, a routine, a class, and/or the whole program.

**5. What features does your PL have for allocating memory dynamically? How is this memory returned to the system?**

C++ uses free() function to allocate memory dynamically  
also has two operators new and delete that perform the task of allocating and freeing the memory in a better and easier way.