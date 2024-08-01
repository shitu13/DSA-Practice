import java.util.Scanner;



public class CF151A {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int k = scanner.nextInt();
		int l = scanner.nextInt();
		int c = scanner.nextInt();
		int d = scanner.nextInt();
		int p = scanner.nextInt();
		int nl = scanner.nextInt();
		int np = scanner.nextInt();
		
		int ttd = (k*l)/(nl*n);
		int ttl = (c*d)/n;
		int tts = (p/np)/n;
		int less =0;
		
		
		
		less = Math.min(Math.min(ttd, ttl),tts);
		
		System.out.println(less);
		
		
		
	}

}
