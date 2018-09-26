/*import java.util.Scanner;

class Arithmetic {
  public static void main(String[] args) {
    
    long ageInYears= 46;
    long ageInDays = ageInYears * 365;
    long ageInHours = ageInDays * 24;
    long ageInMinutes = ageInHours * 60;
    long ageInSeconds = ageInMinutes * 60;
    
    System.out.print("Enter your age in years: ");
    Scanner ageScan = new Scanner(System.in);
    long ageinYears = ageScan.nextInt();
    System.out.println(ageInYears);
    
    System.out.println("You are " + ageInDays + " days old, or ");
    System.out.println("You are " + ageInHours + " hours old, or ");
    System.out.println("You are " + ageInMinutes + " minutes old, or ");
    System.out.println("You are " + ageInSeconds + " seconds old");
  }
}*/

class GPA {
  public static void main(String[] args) {
    float qualPoints = 710;
    float credPoints = 253;
    float gradePointAverage = qualPoints / credPoints;
    
    System.out.println("Enter the number of quality points earned: 710 ");
    System.out.println("Enter the number of credit hours earned:  253 ");
    System.out.println("The grade point average is " + gradePointAverage);
  }
}

  