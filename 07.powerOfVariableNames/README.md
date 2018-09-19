# Chapter 11: The Power of Variable Names

## 1. Describe the rules for valid identifiers in your PL.
Common rules include:
-Class names must start with an uppercase letter
-Starting an identifier with a single leading underscore indicates that the identifier is private.
-Starting an identifier with two leading underscores indicates a strongly private identifier.
-If the identifier also ends with two trailing underscores, the identifier is a language-defined special name.

## 2. What naming convention(s) are typically used with your PL?
Python mostly uses snake_case, but mixedCase is allowed only in contexts where that's already the prevailing style.

## 3. Will your language allow you to write things like the Coding Horror on page 287? 
### If so, show a code sample. Most PLs will not, because the special words that have predefined meanings in the PL are **reserved words**-- programmers cannot use them as identifiers.
Pyhton will not allow you to write write code like that.
```
// code samples go in markdown code "fences"
```
