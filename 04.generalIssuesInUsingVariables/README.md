In this folder, modify a copy of your greetings program to work with some numeric data. Use appropriate variables to store and display the name and age values that the user inputs. It should behave as follows.

```
Enter your name: Dave
Enter your age: 20
Hello, Dave! How do you like being 20 years old?
```

Answer the following questions, then commit your work and create a PR.

**1.  Does your toolset/PL allow implicit declarations? If so, can you turn that off?**

Yes but you can definately turn it off. Simply state "use strict;"" at the start of your code.

**2. Does your PL allow you to define a variable as you declare it? Can you do this close to the variable's first use, or must it be at the top? Give an example that illustrates your answers.**

Yes, Perl's varriables can be declared at any time wether at the start of your code or in a function.

Ex: Greeting Code

print("Whats your name?");
my $name = <>;
chomp($name);
print("Ok, Welcome to Perl $name.")


**3. Does your toolset allow you to filter warning messages? If so, show how to turn on all warnings.**

The Cloud9 IDE itself does not show warnings or errors while editing. The linux bash terminal will throw errors if the code is off. "use warnings;" and "use diagnostics;" are used to convert error messages into more readable formats. 

**4. What levels of scope does your PL have? See the top of p. 245 for examples from a few PLs.**

Perl has global and local scopes. Variables depending on the declared tag under strict, "my" "our" "state", can be at the block level up to the global level.

**5. What features does your PL have for allocating memory dynamically? How is this memory returned to the system?**

