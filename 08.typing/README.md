# Weak vs. Strong Typing

Using your programming toolset, create a program that contains the statements below. If necessary, modify the statements to use proper syntax for your PL.

```pascal
cats = 2;
jobs = 3;
reservations = 4;

dollars = cats * jobs;
if (reservations == dollars) jobs = cats / 5;
```

Try to define the variables so that your PL implementation can recognize the semantic nonsense in these statements. Can your tools generate an error or warning before the program is run? At run-time?

`PHP is a weakly typed language so there is no problem with this program.`

# Static vs. Dynamic Typing

Using your PL, try to write a program that assigns each of the following values to the same variable, one after another: `1`, `1.1`, `"hello"`. If you cannot do it with a single variable, use the smallest number possible.

`PHP is a dynamically typed language with some static features, but it does not have to declare what type of data the variable holds, so one variable can hold all three of these values.`
