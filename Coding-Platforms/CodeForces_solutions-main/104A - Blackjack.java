import java.util.Scanner;

public class CF104A {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		
		int num = n-10;
		
		
		if(num<=0) 
			System.out.println(0);
		if(num>=1&&num<=9||num==11)
			System.out.println(4);
		if(num==10) System.out.println(15);
		if(num>11) System.out.println(0);
		

	}

}