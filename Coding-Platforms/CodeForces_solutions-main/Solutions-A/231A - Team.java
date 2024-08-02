import java.util.Scanner;

public class Codeforces231A {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int T = scanner.nextInt();
		int a =0, b=0, c=0, count =0;
		while(T!=0) {
			a = scanner.nextInt();
			b = scanner.nextInt();
			c = scanner.nextInt();
			
			if((a==1&&b==1)|| (b==1&&c==1)||(c==1&&a==1)) count++;
			
			T--;
		}
		
		System.out.println(count);
	}

}