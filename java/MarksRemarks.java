import java.util.Scanner;

public class MarksRemarks {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter marks (0–100): ");
            int marks = sc.nextInt();

            
            if (marks >= 90 && marks <= 100) {
                System.out.println("Remarks (if-else): Excellent");
            } else if (marks >= 75) {
                System.out.println("Remarks (if-else): Very Good");
            } else if (marks >= 50) {
                System.out.println("Remarks (if-else): Pass");
            } else {
                System.out.println("Remarks (if-else): Fail");
            }


            String remarks = switch (marks / 10) {
                case 10, 9 -> "Excellent";
                case 8, 7 -> "Very Good";
                case 6, 5 -> "Pass";
                default -> "Fail";
            };

            System.out.println("Remarks (switch): " + remarks);
        }
    }
}
