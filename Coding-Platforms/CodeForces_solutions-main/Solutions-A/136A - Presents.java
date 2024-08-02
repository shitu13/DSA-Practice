import java.util.Iterator;
import java.util.Scanner;

public class CF136A {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		
		int [] arr = new int[n+1];
		
		for(int i =1; i<=n; i++) {
			int p = scanner.nextInt();
			arr[p] = i;
		}
		
		for(int i=1; i<=n; i++) {
			System.out.printf("%d ", arr[i]);
		}

	}

}
