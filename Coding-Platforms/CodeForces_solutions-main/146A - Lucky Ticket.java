import java.util.Scanner;


public class CF146A {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		
		int flag = 1;
		int sumLeft =0;
		int sumRight =0;
		
		String string = scanner.next();
		
		for(int i =0; i<n; i++) {
			if(string.charAt(i)!='4' && string.charAt(i)!= '7') {
				flag=0;
				break;
			}
			
			else {
			int x = Integer.parseInt(string.charAt(i)+"");
			if(i<n/2)  
				sumLeft+=x;
			else
				sumRight+=x;
		
			}
		}
	
		if(flag == 1 && sumLeft==sumRight)
			System.out.println("YES");
		else
			System.out.println("NO");
	}

}
