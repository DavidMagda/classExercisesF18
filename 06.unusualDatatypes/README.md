# Unusual Datatypes

In the spaces below, describe the following.

## 1. Your PL's support for structures or records. Also, your PL's support for object-oriented concepts, a related idea which we will explore later on.

JavaScript objects act like structures or records, if you look only at the properties (members, object variables).
JavaScript has extensive OO features. The underlying "object model" is quite different from most OOP languages, but recent JavaScript versions have added alternative syntax that is similar to C++, Java, etc.

## 2. Your PL's support for reference or pointer types.
```
// In JS, variables that store objects are references.
let o1 = new SomeClass(); // o1 is now a reference to an object
let o2 = o1; // There are now two references to the same object, NOT two objects. This is "aliasing".
```
## 3. Your PL's features related to global data and/or access routines.

JavaScript has global variables, but several other more restricted scopes. Unlike many similar OOP languages, JavaScript does not enforce access restrictions on object data. However, it recently introduced a feature for [access routines](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Working_with_Objects#Defining_getters_and_setters).

We will be exploring memory management and pointer issues in class using some C code that you will find in this folder.
