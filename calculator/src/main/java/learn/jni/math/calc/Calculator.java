package learn.jni.math.calc;

public class Calculator {

    static {
        System.loadLibrary("mymath");
    }
    
    public native int square(int a);
    
    public native int add(int a, int b);
    
    public native int subtract(int a, int b);
    
    public native int multiply(int a, int b);
}
