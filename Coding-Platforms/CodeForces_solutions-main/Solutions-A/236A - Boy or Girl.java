

import java.util.Arrays;
import java.util.Scanner;

public class CF236A {
	
	public static void main(String[] args) {
	
		Scanner scanner = new Scanner(System.in);
		String string = scanner.next();
		int count =0;
		
		char [] ch = string.toCharArray();
		Arrays.sort(ch);
		
		for(int i =1; i<string.length(); i++) {
			
			if(ch[i-1]!=ch[i]) 
				count++;
			}
		
		
		if(count%2==0) System.out.println("IGNORE HIM!");
		else System.out.println("CHAT WITH HER!");
		}
		
	

}

