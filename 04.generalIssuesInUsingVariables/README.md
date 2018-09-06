In this folder, modify a copy of your greetings program to work with some numeric data. Use appropriate variables to store and display the name and age values that the user inputs. It should behave as follows.

```
Enter your name: Dave
Enter your age: 20
Hello, Dave! How do you like being 20 years old?
```

Answer the following questions, then commit your work and create a PR.

**1.  Does your toolset/PL allow implicit declarations? If so, can you turn that off?**

No. PHP does not support explicit declaration.

**2. Does your PL allow you to define a variable as you declare it? Can you do this close to the variable's first use, or must it be at the top? Give an example that illustrates your answers.**

PHP does allow me to define a variable as I declare it. It just has to be before the variable is used.

Por ejemplo, 

```PHP
		$name = {$_POST['name']};
		$age = {$_POST['age']};
		echo "Hello, $name! How do you like being $age years old?";
```
The variables are declared and defined in the same line, before they are used. 

**3. Does your toolset allow you to filter warning messages? If so, show how to turn on all warnings.**

I have not found a setting that allows me to filter warning messages.

**4. What levels of scope does your PL have? See the top of p. 245 for examples from a few PLs.**

PHP has local and global scopes for variables.

**5. What features does your PL have for allocating memory dynamically? How is this memory returned to the system?**

PHP has the ability for the programmer to limit the heap memory usage. PHP has a garbage collector and frees itself of variables if their reference count reaches 0.