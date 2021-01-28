#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring


JNICALL
Java_com_kp_ndkapikey_Keys_getApiKey(JNIEnv *env, jobject object) {
    std::string api_key = "KP secret API Key";
    return env->NewStringUTF(api_key.c_str());
}