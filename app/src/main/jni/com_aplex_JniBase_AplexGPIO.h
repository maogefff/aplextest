/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_aplex_JniBase_AplexGPIO */

#ifndef _Included_com_aplex_JniBase_AplexGPIO
#define _Included_com_aplex_JniBase_AplexGPIO
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_aplex_JniBase_AplexGPIO
 * Method:    open
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_aplex_JniBase_AplexGPIO_open
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_aplex_JniBase_AplexGPIO
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_aplex_JniBase_AplexGPIO_close
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_aplex_JniBase_AplexGPIO
 * Method:    ioctl
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_aplex_JniBase_AplexGPIO_ioctl
  (JNIEnv *, jobject, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
