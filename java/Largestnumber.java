public class Largestnumber {
    public static void main(String[] args) {
        int a = 10, b = 25, c = 15;

        if (a >= b && a >= c) {
            System.out.println("Largest number is: " + a);
        } else if (b >= a && b >= c) {
            System.out.println("Largest number is: " + b);
        } else {
            System.out.println("Largest number is: " + c);
        }
    }
}
