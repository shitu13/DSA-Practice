package FifthLecture;
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Day1DataTypes {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        double d2 = scan.nextDouble();
        String string = scan.nextLine();
        String str1 = scan.nextLine();
        
        System.out.println(i+n);
        System.out.printf("%.1f\n", d2+d);
        System.out.println(s+str1);


        scan.close();
    }
}