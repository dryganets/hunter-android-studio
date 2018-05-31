#include <jni.h>
#include <string>

#include <boost/algorithm/string.hpp>


extern "C" JNIEXPORT jstring

JNICALL
Java_com_dryganets_hunter_MainActivity_stringFromJNI(
    JNIEnv *env,
    jobject /* this */) {
  std::string hello = "Hello from C++";
  return env->NewStringUTF(to_upper_copy(hello).c_str());
}
