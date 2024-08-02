
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class CF158A {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		int k = scanner.nextInt();
		int [] a = new int[100];
		int count =0;
		
		for(int i =0; i<n; i++) {
			a[i] = scanner.nextInt();
		}
		
		//Arrays.sort(a, 0, n);

		for(int i =0; i<=n; i++) {
			if(a[i]>= a[k-1] && a[i]!= 0)
				count++;
		}
		
		System.out.println(count);

	}

}
