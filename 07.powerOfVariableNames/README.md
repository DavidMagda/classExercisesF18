# Chapter 11: The Power of Variable Names

## 1. Describe the rules for valid identifiers in your PL.

Perl identifiers start with a sigil. The sigil can be followed with any combination of alphabetic and numeric characters, and underscores.
Identifiers can not contain punctuation or particular symbols.

## 2. What naming convention(s) are typically used with your PL?

Perl does not have a particular naming convention, It is a metter of preference, but gernally programmers in perl will name diferent items in differnt conventions.

Camel Case and Snake Case are two of the naming conventions popularly used

## 3. Will your language allow you to write things like the Coding Horror on page 287? 
### If so, show a code sample. Most PLs will not, because the special words that have predefined meanings in the PL are **reserved words**-- programmers cannot use them as identifiers.

Due to Perl's sigils, identifiers will never conflict with special or reserved words while using the strict flag on your code. If not using strict, Perl will not require sigils and will not flag key words as identifiers. 

```
// code samples go in markdown code "fences"

sub open {
  my ($arg1, $arg2, $arg3) = @_;
  print "arg1 = $arg1\n";
  print "arg2 = $arg2\n";
  print "arg3 = $arg3\n";
}
 
open( my $input, "<", "foo.txt");     # What does this do?

```
This code without the strict flags will recognise open as a key word and invoke the built in function.
This ignores the subroutine completely without throwing errors.
When using the strict flag, Perl will recognise this error and stop the code from being ran until the issue is resolved.