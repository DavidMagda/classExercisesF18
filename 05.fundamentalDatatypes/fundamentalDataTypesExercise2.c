int main() {
    double p, c;
    long double g;
    printf("Enter the number of quality points earned: ");
    scanf("%lf", &p);
    printf("Enter the number of credits hours earned: ");
    scanf("%lf", &c);
    while(c==0){
        printf("Credit hours can't be 0. Enter the number of credits hours earned: ");
    }
    g= (p/c);
    printf("The grade point average is %LF", g);

return 0;
}