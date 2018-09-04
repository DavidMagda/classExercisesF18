In this folder, modify a copy of your greetings program to work with some numeric data. Use appropriate variables to store and display the name and age values that the user inputs. It should behave as follows.

```
Enter your name: Dave
Enter your age: 20
Hello, Dave! How do you like being 20 years old?
```

Answer the following questions, then commit your work and create a PR.

**1.  Does your toolset/PL allow implicit declarations? If so, can you turn that off?**
C allows for implicit declaration. However, because of its age, the only way to turn it off is to switch to a newer version of the language.


**2. Does your PL allow you to define a variable as you declare it? Can you do this close to the variable's first use, or must it be at the top? Give an example that illustrates your answers.**
Yes, C does allow you to define as you declare. You can declare the variable almost anywhere before it is used.
if (n > 0){
    int i;
    for (i=0;i<n;i++)
}


**3. Does your toolset allow you to filter warning messages? If so, show how to turn on all warnings.**
C9 does allow you to filter warning messages. They appear in the gutter and you can go to the preferences option and enable or disable warnings.


**4. What levels of scope does your PL have? See the top of p. 245 for examples from a few PLs.**
C has both global and local scopes. It also allows blocks to be nested, so it uses block scope.


**5. What features does your PL have for allocating memory dynamically? How is this memory returned to the system?**
C has malloc() and calloc() functions for allocating memory. Memory returns to the system when the process is finished by using free() and realloc() functions.

int main()
{
    char name[20];
    int i;
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your age: ");
    scanf("%d", &i);
    printf( "Hello, %s! How do you like being %d years old?", name, i);
    return 0;
}




