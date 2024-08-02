import java.util.Scanner;

public class CF110A {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int count=0;
		
		String string = scanner.next();
		
		for(int i=0; i<string.length(); i++) {
			if(string.charAt(i)=='4'||string.charAt(i)=='7') {
				count++;
			}
		}
		
		if(count==4||count==7) System.out.println("YES");
		else System.out.println("NO");

	}

}
