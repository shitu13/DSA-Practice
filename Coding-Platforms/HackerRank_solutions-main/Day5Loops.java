import java.util.Iterator;
import java.util.Scanner;

public class ThirdLecture {

    static Scanner sc= new Scanner(System.in); 
    public static void main(String[] args) {
        
    int N = sc.nextInt();
    for (int i = 1; i <= 10; i++) {
         System.out.println(N+" "+"x"+" "+i+" = "+N*i);
        }

    }

    static void prln(Object anyObject) {
        System.out.println(anyObject);
    }
}
