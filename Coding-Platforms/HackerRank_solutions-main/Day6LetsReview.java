import java.util.Iterator;
import java.util.Scanner;

public class MaxChar {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        
        int T = scanner.nextInt();
        while(T!=0) {
            String string = scanner.next();
            int n = string.length();
            
            for(int i =0; i<n; i++) {
                if(i%2==0) 
                    System.out.print(string.charAt(i));
                
            }
            System.out.print(" ");
            for(int i =0; i<n; i++) {
                if(i%2!=0) 
                    System.out.print(string.charAt(i));
                
            }
            System.out.println("");
            T--;
        }
    }

}
