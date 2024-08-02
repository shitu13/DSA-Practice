import java.util.Arrays;
import java.util.Scanner;

public class CF141A {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		String str1 = scanner.next();
		String str2 = scanner.next();
		String str3 = scanner.next();
		
		String str4 = sortString(str1+str2);
		String str5 = sortString(str3);
		
		if(str4.equals(str5)) 
			System.out.println("YES");
		else 
			System.out.println("NO");

	}
	
	public static String sortString(String string) {
		
		char [] tempArray = string.toCharArray();
		Arrays.sort(tempArray);
		
		return new String(tempArray);
	}

}
