

import java.util.Scanner;


public class CF155A {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		int [] a = new int[1005];
		
		
		for(int i =0; i<n; i++) {
			a[i] = scanner.nextInt();
		}
		
		int count =0;
		int max = a[0];
		int min = a[0];
		
		for(int i =0; i<n; i++) {
				if(a[i]>max) { 
					max =a[i]; 
					 count ++; 
				}
				
				if(a[i]<min) { 
					min =a[i]; 
					 count ++; 
				}
			
		}
		
		System.out.println(count);
	}

}
