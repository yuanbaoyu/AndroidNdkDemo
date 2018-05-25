//
// Created by yuanbaoyu on 18/5/25.
//
#include <jni.h>
#include <string>
#include <android/log.h>
#include "../../../../MultiNdkDemo/src/main/cpp/three/three.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_xinghai_androidndkdemo_MainActivity_stringFromJNI1(JNIEnv *env, jobject instance) {

    // TODO
    std::string tag = "ndk third called";
    char* msg = "日志打印";
    __android_log_print(ANDROID_LOG_DEBUG, tag.c_str(), "%d%s\n", sum(1, 6), msg);
    std::string hello = "Hello from C++";

    return env->NewStringUTF(hello.c_str());
}
