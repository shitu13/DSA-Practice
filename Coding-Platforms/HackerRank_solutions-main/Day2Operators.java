import java.util.Scanner;



public class Day2Operators {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        double meal_cost = sc.nextDouble();
        double tip_percent = sc.nextDouble();
        double tax_percent = sc.nextDouble();
        
        double result = meal_cost+ (meal_cost*(tip_percent/100)) + (meal_cost*(tax_percent/100));
        
        int round = (int)Math.round(result);
        
        System.out.println(round);
    }

}
