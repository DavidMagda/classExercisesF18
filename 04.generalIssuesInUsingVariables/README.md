In this folder, modify a copy of your greetings program to work with some numeric data. Use appropriate variables to store and display the name and age values that the user inputs. It should behave as follows.

```
Enter your name: Dave
Enter your age: 20
Hello, Dave! How do you like being 20 years old?
```

Answer the following questions, then commit your work and create a PR.

**1.  Does your toolset/PL allow implicit declarations? If so, can you turn that off?**

no

**2. Does your PL allow you to define a variable as you declare it? Can you do this close to the variable's first use, or must it be at the top? Give an example that illustrates your answers.**

yes, u can do it close anywhere, as long as it is outside of the curly braces of the function calling the variable

**3. Does your toolset allow you to filter warning messages? If so, show how to turn on all warnings.**


yes, u can set it to only look at the parent and children classes of the element (argument)

**4. What levels of scope does your PL have? See the top of p. 245 for examples from a few PLs.**


global, local, class scope
**5. What features does your PL have for allocating memory dynamically? How is this memory returned to the system?**

java dynamically allocates memory when creating objects, not declaring or referencing variables. and the garbage collector returns that used memory back to the heap so you can reuse it again,
although you can get external tools to return the memory to the OS, it isn't recommended because if you used that memory for one object, it's assumed youll need to reuse that same memory
for another object, which saves on CPU power.