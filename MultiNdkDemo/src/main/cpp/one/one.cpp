#include <jni.h>
#include <string>
#include <android/log.h>
extern "C"
JNIEXPORT jstring JNICALL
Java_com_xinghai_multi_JniUtil_stringFromOne(JNIEnv *env, jclass type) {

    std::string tag = "one ndk";
    char* msg = "日志打印";
    __android_log_print(ANDROID_LOG_DEBUG, tag.c_str(), "%s\n", msg);
    std::string hello = "ndk one";

    return env->NewStringUTF(hello.c_str());
}