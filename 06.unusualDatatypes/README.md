# Unusual Datatypes

We will be exploring memory management and pointer issues in class using some C code that you will find in this folder.

In the spaces below, describe the following.

## 1. Your PL's support for structures or records. Also, your PL's support for object-oriented concepts, a related idea which we will explore later on.
Ruby has support for structs, as well as traditional data types one might expect in any turing complete language. Ruby has support for creating individual instances of a class, identifying them with an ID within the class

## 2. Your PL's support for reference or pointer types.
more or less every variable is a pointer to an object because ruby defaults to objet scope. The exceptions being integers, true/false, and nil

## 3. Your PL's features related to global data and/or access routines.

$ declares the global scope, @@ for the class scope, and @ for the instance scope