import java.util.ArrayList;

class Person {
  private String pName;
  private int pAge;
  public Person (int age, String name) {
    pName = name;
    pAge = age;
  }
  public String getName() {
    return pName;
  } 
  public int getAge() {
    return pAge;
  }
}

public ArrayList<Person> aL = new ArrayList<Person>();
  aL.add = new Person(23, "Greg");
}

