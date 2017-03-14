package davide.jni;

/**
 * Created by dave on 14/03/17.
 */
public class HalloFromC {

    private native void print(int a);
    private native int sum (int a, int b);

    public static void main (String[] args) {
        HalloFromC halloFromC = new HalloFromC();
        halloFromC.print(halloFromC.sum(1,2));
    }

    static {
        System.loadLibrary("HalloFromC");
    }
}
