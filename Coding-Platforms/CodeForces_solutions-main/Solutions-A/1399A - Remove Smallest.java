

import java.util.Arrays;
import java.util.Scanner;

public class CF1399A {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		
		while(t!=0) {
			int flag=0;
			int dif = 0;
			int n = scanner.nextInt();
			int [] arr = new int [1005];
			for(int i=0; i<n; i++) {
				arr[i] = scanner.nextInt();
				
			}
			
			Arrays.sort(arr, 0, n);
			for(int i=n-1; i>0; i--) {
				 dif = arr[i]-arr[i-1];
				 if(dif>1) { 
					 flag =1;
					 System.out.println("NO");
					 break;
				 }
			}
			
			if (flag ==0) System.out.println("YES");
			
			t--;
		}

	}

}
