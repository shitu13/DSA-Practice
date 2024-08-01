

import java.util.Arrays;
import java.util.Iterator;
import java.util.Scanner;

public class CF228A {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int[] a = new int[50];
		
		for(int i =0; i<4; i++) {
			a[i] = scanner.nextInt();
		}
		Arrays.sort(a, 0, 4);
		
		int count = 0;
		for(int i =0; i<4; i++) {
			if(a[i] == a[i+1]) count++;
		}
		System.out.println(count);
		}
	}
