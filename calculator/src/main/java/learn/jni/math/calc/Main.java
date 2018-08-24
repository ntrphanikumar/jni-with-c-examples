package learn.jni.math.calc;

public class Main {

    private static final Calculator CALCULATOR = new Calculator();

    public static void main(String[] args) {
        System.out.println("Square of 5 is: " + CALCULATOR.square(5));
    }
}
