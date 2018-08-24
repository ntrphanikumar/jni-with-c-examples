#include <jni.h>
#include <stdio.h>
#include "learn_jni_math_calc_Calculator.h"
#include "math/Math.c"

JNIEXPORT jint JNICALL Java_learn_jni_math_calc_Calculator_square
  (JNIEnv * env, jobject jo, jint num) {
   printf("Computing square of %d in JNI Math library. \n", num);
   return square(num);
}

JNIEXPORT jint JNICALL Java_learn_jni_math_calc_Calculator_add
  (JNIEnv * env, jobject jo, jint a, jint b) {
   printf("Computing sum of %d and %d in JNI Math library. \n", a, b);
   return sum(a,b);
}

JNIEXPORT jint JNICALL Java_learn_jni_math_calc_Calculator_subtract
(JNIEnv * env, jobject jo, jint a, jint b) {
   printf("Computing subtraction of %d from %d in JNI Math library. \n", b, a);
   return subtract(a,b);
}

JNIEXPORT jint JNICALL Java_learn_jni_math_calc_Calculator_multiply
(JNIEnv * env, jobject jo, jint a, jint b) {
   printf("Computing multiplication of %d with %d in JNI Math library. \n", a, b);
   return multiply(a,b);
}
