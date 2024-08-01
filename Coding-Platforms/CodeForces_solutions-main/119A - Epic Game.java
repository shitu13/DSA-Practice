

import java.util.Scanner;

public class CF119A {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int n = scanner.nextInt();
		
		while(true) {
		
			n = n - Fgcd(a, n);
			
			if(n==0) {
			System.out.println(0);
			break;
			}
			
			n = n - Fgcd(b, n);
			if(n==0) {
				System.out.println(1);
				break;
			}
		}
	
	}
	
	public static int Fgcd(int a, int b) {
		int gcd =1;
		
		for(int i=1; i<=a && i<=b; i++) {
			
			if(a%i==0 && b%i==0) gcd =i; 
		}
		return gcd;
	}

}
