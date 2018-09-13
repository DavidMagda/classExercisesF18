# Chapter 11: The Power of Variable Names

## 1. Describe the rules for valid identifiers in your PL.
In C, an indentifier can only be letters in the alphabet, numbers 0-9, and an underscore. The first character of an identifier can only be letters in the alphabet or an underscore. Idetifiers are case sensitive and no keywords or special characters are allowed to be used in or as the identifier.

## 2. What naming convention(s) are typically used with your PL?
C is a mix of snake_case and camelCase. Normal variables are lowercase, local variables and stuctures are camelCase, global variables are g_camelCase, constants and enum values are ALL_CAPS, and pointer variables add p_ to the prefix.  

## 3. Will your language allow you to write things like the Coding Horror on page 287? 
### If so, show a code sample. Most PLs will not, because the special words that have predefined meanings in the PL are **reserved words**-- programmers cannot use them as identifiers.
C has resevered words that you can't use for anything other than the predefined meanings. Exmaples are: int, struct, return, void, double, long, signed, etc. However, C is system language, so it is easy to get around these restrictions, I just haven't found a case in which to do so.


```
// code samples go in markdown code "fences"
```


