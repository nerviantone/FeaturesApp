#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_imagepick_android_vogella_de_featuresapp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
