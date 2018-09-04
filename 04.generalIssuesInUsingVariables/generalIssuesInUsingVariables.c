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
