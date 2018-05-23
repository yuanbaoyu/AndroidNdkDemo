#include <jni.h>
#include <string>
#include <android/log.h>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_xinghai_androidndkdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string tag = "app ndk log tak";
    char* msg = "日志打印";
    __android_log_print(ANDROID_LOG_DEBUG, tag.c_str(), "%s\n", msg);
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
