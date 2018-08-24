package learn.jni.math.calc;

public class Calculator {

    static {
        System.loadLibrary("mymath");
    }
    
    public native int square(int a);
}
