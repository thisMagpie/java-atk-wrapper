/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_GNOME_Accessibility_AtkWrapper */

#ifndef _Included_org_GNOME_Accessibility_AtkWrapper
#define _Included_org_GNOME_Accessibility_AtkWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    initNativeLibrary
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_GNOME_Accessibility_AtkWrapper_initNativeLibrary(void);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    loadAtkBridge
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_loadAtkBridge(void);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    focusNotify
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_focusNotify
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    windowOpen
 * Signature: (Ljavax/accessibility/AccessibleContext;Z)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_windowOpen
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    windowClose
 * Signature: (Ljavax/accessibility/AccessibleContext;Z)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_windowClose
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    windowMinimize
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_windowMinimize
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    windowMaximize
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_windowMaximize
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    windowRestore
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_windowRestore
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    windowActivate
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_windowActivate
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    windowDeactivate
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_windowDeactivate
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    windowStateChange
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_windowStateChange
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    emitSignal
 * Signature: (Ljavax/accessibility/AccessibleContext;I[Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_emitSignal
  (JNIEnv *, jclass, jobject, jint, jobjectArray);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    objectStateChange
 * Signature: (Ljavax/accessibility/AccessibleContext;Ljava/lang/Object;Z)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_objectStateChange
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    componentAdded
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_componentAdded
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    componentRemoved
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_componentRemoved
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    boundsChanged
 * Signature: (Ljavax/accessibility/AccessibleContext;)V
 */
JNIEXPORT void JNICALL Java_org_GNOME_Accessibility_AtkWrapper_boundsChanged
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_GNOME_Accessibility_AtkWrapper
 * Method:    dispatchKeyEvent
 * Signature: (Lorg/GNOME/Accessibility/AtkKeyEvent;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_GNOME_Accessibility_AtkWrapper_dispatchKeyEvent
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
