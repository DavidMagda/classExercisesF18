import java.util.Scanner;

class ScoreKeep {
  
  private static int studentGrade;
  public static void main(String[] args) {
    
    System.out.print("Enter Student Grade ");
    Scanner scoreScan = new Scanner(System.in);
    int studentGrade = scoreScan.nextInt();
    System.out.println(studentGrade);
    
    if (studentGrade >= 90) {
      System.out.print("The student grade is an A ");
    }
    if (studentGrade >= 80 && studentGrade < 90) {
      System.out.print("The student grade is an B ");
    }
    if (studentGrade >= 70 && studentGrade < 80) {
      System.out.print("The student grade is an C ");
    }
    if (studentGrade >= 60 && studentGrade < 70) {
      System.out.print("The student grade is an D ");
    }
    if (studentGrade >= 0 && studentGrade < 60) {
      System.out.println("The student grade is an F ");
    }
    if (studentGrade < 0 || studentGrade > 100) {
      System.out.print("Error: Invalid Entry ");
    }
  }
}

/*import java.util.Scanner;
 * 
 class shortCircuit {
 
 public static void main(String[] args) {
 
 int pointsPossible = 0;
 
 System.out.print("Enter Points ");
 Scanner scoreScan = new Scanner(System.in);
 int pointsEarned = scoreScan.nextInt();
 System.out.println(pointsEarned);
 
 if (pointsPossible > 0 && pointsEarned / pointsPossible >= 0.60) {
 System.out.print("You Pass");
 }
 else { System.out.print("You Fail");
 }
 }
 }*/

