#include <jni.h>
#include <string>
#include "module1.h"

//log定义


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    int len = 5;
    module1_test();
    return env->NewStringUTF(hello.c_str());
}