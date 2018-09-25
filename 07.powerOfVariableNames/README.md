# Chapter 11: The Power of Variable Names

## 1. Describe the rules for valid identifiers in your PL.



## 2. What naming convention(s) are typically used with your PL?

1. i and j are integer indexes
2. c and ch are character variables
3. n is a number of something
4. p is a pointer
5. s is a string
6. preprocessor macros are in ALL_CAPS. Type-defs as well.
7. Variable and routine names are in all_lowercase
8. The underscore character is used as a separator: letters_in_lowercase

## 3. Will your language allow you to write things like the Coding Horror on page 287? 
### If so, show a code sample. Most PLs will not, because the special words that have predefined meanings in the PL are **reserved words**-- programmers cannot use them as identifiers.

C++ won't allow this.
