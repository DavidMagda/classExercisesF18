# Hello, `<your name here>`!

Put the source code file(s) for your program that greets the user in this folder.

Answer the question below.

Commit your work and create a PR for presentation in class.

**1. Explain any setup that was needed to make your program run.**

int main()
{
    char name[20];
    /*indicates how many characters can be displayed for the variable*/
    printf("Please enter your name: ");
    /*asks the user to enter a name*/
    scanf("%s", name);
    /*reads the name entry*/
    printf( "Hello, %s!", name);
    /*prints Hello, <user's name>*/
    return 0;
}

