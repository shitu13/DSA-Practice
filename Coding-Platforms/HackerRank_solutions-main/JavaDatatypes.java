import java.util.Scanner;

public class JavaDatatypes {

	public static void main(String[] argh) {
		
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		
		while(T!=0) {
			try {
				long n = sc.nextLong();
				prln(n +" can be fitted in:");
				if (n>=-128 && n<=127) prln("* byte");
				if(n>= Short.MIN_VALUE && n<= Short.MAX_VALUE) prln("* short");
				if(n>= Integer.MIN_VALUE && n<= Integer.MAX_VALUE) prln("* int");
				if(n>=Long.MIN_VALUE && n<=Long.MAX_VALUE) prln("* long");
			} 
			
			catch (Exception e) {
			prln(sc.next()+ " can't be fitted anywhere.");	
			}
			T--;
		}

	}
	
	
	static void prln(Object anyObject) {
		System.out.println(anyObject);
	}
	static void pr(Object anyObject) {
		System.out.print(anyObject);
	}

}
