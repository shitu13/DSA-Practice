import java.util.Scanner;

public class CF112A {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		String str1 = scanner.next().toUpperCase();
		String str2 = scanner.next().toUpperCase();
		
		
		int ret = str1.compareTo(str2);
		
		if(ret==0) System.out.println(0);
		if(ret<0) System.out.println(-1);
		if(ret>0) System.out.println(1);

	}

}
