In this folder, modify a copy of your greetings program to work with some numeric data. Use appropriate variables to store and display the name and age values that the user inputs. It should behave as follows.

```
Enter your name: Dave
Enter your age: 20
Hello, Dave! How do you like being 20 years old?
```

Answer the following questions, then commit your work and create a PR.

**1.  Does your toolset/PL allow implicit declarations? If so, can you turn that off?**

C++ have not implicit declarations. Is a fatal error not an warning.

**2. Does your PL allow you to define a variable as you declare it? Can you do this close to the variable's first use, or must it be at the top? Give an example that illustrates your answers.**

Yes it does. It's better if you declare the variable close where it should be used so the scope of the variable is keept at the minimum.

```
int a = 5;
int b = 2;
a = a + 1;
int result = a - b;
```
```

string mystring;
  mystring = "This is a string";

string mystring = "This is a string";
```

**3. Does your toolset allow you to filter warning messages? If so, show how to turn on all warnings.**

Yes. You can makke all the warning into errors with `-Werror`

**4. What levels of scope does your PL have? See the top of p. 245 for examples from a few PLs.**

1. Block
2. Routine
3. Class
4. The whole progra
5. Function
6. Namespace

**5. What features does your PL have for allocating memory dynamically? How is this memory returned to the system?**

Dynamic memory allocation in C++ must be performed by the programer. Is allocated on Heap memory.  It is programmers responsibility to deallocate memory when no longer needed.

