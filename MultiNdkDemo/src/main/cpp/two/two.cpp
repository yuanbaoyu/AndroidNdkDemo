#include <jni.h>
#include <string>
#include <android/log.h>
extern "C"
JNIEXPORT jstring JNICALL
Java_com_xinghai_multi_JniUtil_stringFromTwo(JNIEnv *env, jclass type) {

    // TODO
    std::string tag = "two ndk";
    char* msg = "日志打印";
    __android_log_print(ANDROID_LOG_DEBUG, tag.c_str(), "%s\n", msg);
    std::string hello = "ndk two";

    return env->NewStringUTF(hello.c_str());
}