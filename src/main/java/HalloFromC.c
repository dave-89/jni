#include<jni.h>
#include<stdio.h>
#include "davide_jni_HalloFromC.h"

JNIEXPORT void JNICALL Java_davide_jni_HalloFromC_print
  (JNIEnv * jniEnv, jobject jobject, jint i) {
  printf("Hallo from C! The number is %d\n",i);
  }
  
JNIEXPORT jint JNICALL Java_davide_jni_HalloFromC_sum
  (JNIEnv * env, jobject obj, jint a, jint b) {
  return a+b;
  }
  
