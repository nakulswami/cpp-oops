//wap to take two double numbers and use relational operator to compare them and show the result
import java.util.Scanner;
public class Relational {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter first double number: ");
            double num1 = sc.nextDouble();
            System.out.print("Enter second double number: ");
            double num2 = sc.nextDouble();

            System.out.println("num1 == num2: " + (num1 == num2));
            System.out.println("num1 != num2: " + (num1 != num2));
            System.out.println("num1 > num2: " + (num1 > num2));
            System.out.println("num1 < num2: " + (num1 < num2));
            System.out.println("num1 >= num2: " + (num1 >= num2));
            System.out.println("num1 <= num2: " + (num1 <= num2));
        }
    }
}