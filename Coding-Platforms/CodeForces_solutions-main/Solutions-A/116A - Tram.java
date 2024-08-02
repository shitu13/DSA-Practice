import java.util.Scanner;

public class CF116A {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		int count =0; 
		int max =0;
		
		int [] a =new int [n];
		int [] b = new int [n];
		
		for(int i=0; i<n; i++) {
			
			a[i] = scanner.nextInt();
			b[i] = scanner.nextInt();
			
			count += b[i]-a[i];
			
			if(count>max) max =count;
		}
		
		System.out.println(max);

	}

}
