int main()
{
    int score = 0;
    printf("Please enter your numeric grade: ");
    scanf("%d", &score);
    while(score<= 0 || score>= 100){
        printf("Numeric grade must be between 0 and 100 to be valid. Enter the numeric grade: ");
        scanf("%d", &score);
    }
    if (score>= 90){
        printf("Your letter grade is: A");
    }
    else if (score>= 80 && score<= 89){
        printf("Your letter grade is: B");
    }
    else if (score>= 70 && score<= 79){
        printf("Your letter grade is: C");
    }
    else if (score>= 60 && score<= 69){
        printf("Your letter grade is: D");
    }
    else if (score>= 0 && score<= 59){
        printf("Your letter grade is: F");
    }
    return 0;
}