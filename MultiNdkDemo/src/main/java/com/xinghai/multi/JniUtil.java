package com.xinghai.multi;

/**
 * Created on 18/5/24.
 *
 * @author yuanbaoyu
 * @version 1.0
 * @since 1.0
 */
public class JniUtil {
    static {
        System.loadLibrary("one");
        System.loadLibrary("two");
    }

    public static native String stringFromOne();

    public static native String stringFromTwo();
}
