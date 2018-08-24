package learn.jni.math.calc;

public class Main {

    private static final Calculator CALCULATOR = new Calculator();

    public static void main(String[] args) {
        System.out.println(CALCULATOR.square(5));
        System.out.println(CALCULATOR.add(10, 12));
        System.out.println(CALCULATOR.subtract(12, 5));
        System.out.println(CALCULATOR.multiply(3, 7));
    }
}
