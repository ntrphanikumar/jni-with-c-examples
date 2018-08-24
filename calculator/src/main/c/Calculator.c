#include <jni.h>
#include <stdio.h>
#include "learn_jni_math_calc_Calculator.h"

JNIEXPORT jint JNICALL Java_learn_jni_math_calc_Calculator_square(JNIEnv * env, jobject jo, jint num) {
   printf("Computing square of %d in JNI Math library. \n", num);
   return num * num;
}
