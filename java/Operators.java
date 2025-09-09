//wap to take 2 numbers input from user and perform all arithmetic operations
import java.util.Scanner;
public class Operators {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter first number: ");
            int num1 = sc.nextInt();
            System.out.print("Enter second number: ");
            int num2 = sc.nextInt();

            System.out.println("Addition: " + (num1 + num2));
            System.out.println("Subtraction: " + (num1 - num2));
            System.out.println("Multiplication: " + (num1 * num2));
            if (num2 != 0) {
                System.out.println("Division: " + (num1 / num2));
                System.out.println("Modulus: " + (num1 % num2));
            } else {
                System.out.println("Division and Modulus by zero is not allowed.");
            }

        }
    }
}