import java.util.Scanner;

public class Solution {

    static Scanner sc= new Scanner(System.in); 
    public static void main(String[] args) {
        
    int a = sc.nextInt();
    if (a%2==1) {
        prln("Weird");
    }
    else {
        if(a>=2&&a<=5) prln("Not Weird");
        if(a>=6&&a<=20) prln("Weird");
        if (a>20) prln("Not Weird");
    }
    
    }

    static void prln(Object anyObject) {
        System.out.println(anyObject);
    }
}
