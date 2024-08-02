import java.util.Scanner;

public class CF148A {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int k = scanner.nextInt();
		int l = scanner.nextInt();
		int m = scanner.nextInt();
		int n = scanner.nextInt();
		int d = scanner.nextInt();
		int count = 0;
		
		for(int i =1; i<=d; i++) {
			if(i%k==0) count++;
			
			if(i%k!=0) {
				if(i%l==0) count++;
			}
			
			if(i%k!=0 && i%l!=0) {
				if(i%m==0) count++;
			}
			
			if(i%k!=0 && i%l!=0 && i%m!=0) {
				if(i%n==0) count++;
			}
			
		}
		
		System.out.println(count);

	}

}
