int main() 
{
    int y, d, h, m, s;
 
    printf("Enter the number of years: ");
    scanf("%d", &y);
    d = y * 365;
    h =(y * 365) * 24;
    m =((y * 365) * 24) * 60;
    s =(((y * 365) * 24) * 60) * 60;
    printf ("You are...\n %d years old, or\n %d days old, or \n %d hours old, or \n %d minutes old, or \n %d seconds old",
            y, d, h, m, s);
    return 0;
}