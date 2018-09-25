
import java.util.Scanner;


public class helloNameHere {
  public static void main(String args[]) {
    System.out.print("Enter Your Name: ");
    Scanner nameScan = new Scanner(System.in);
    String name = nameScan.nextLine();
    System.out.println(name);
    
    System.out.print("Enter Your Age: ");
    Scanner ageScan = new Scanner(System.in);
    int age = ageScan.nextInt();
    System.out.println(age);
    
    System.out.println("Hello Greg! How do you like being 23 years old?");
  }
}

