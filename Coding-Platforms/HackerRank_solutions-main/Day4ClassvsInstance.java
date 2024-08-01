

public class Person {
    private int age;	
  
	public Person(int initialAge) {
  		age = initialAge;
          if(age<0){
          System.out.println("Age is not valid, setting age to 0.");
          this.age =0;
          }
	}

	public void amIOld() {
  		if(age<13)
        System.out.println("You are young.");
        if(age>= 13 && age<18) System.out.println("You are a teenager.");
        if(age>=18) System.out.println("You are old.");
	}

	public void yearPasses() {
  		 age = age+1;
	}

