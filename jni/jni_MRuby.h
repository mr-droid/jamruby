/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jamruby_mruby_MRuby */

#ifndef _Included_org_jamruby_mruby_MRuby
#define _Included_org_jamruby_mruby_MRuby
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_redirect_stdout
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1redirect_1stdout
  (JNIEnv *, jclass);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_redirect_stderr
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1redirect_1stderr
  (JNIEnv *, jclass);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_redirect_stdin
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1redirect_1stdin
  (JNIEnv *, jclass);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_loadIrep
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1loadIrep
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_parseString
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1parseString
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_parseFile
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1parseFile
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_generateCode
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1generateCode
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_arrayNew
 * Signature: (J)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1arrayNew
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_arrayPush
 * Signature: (JLorg/jamruby/mruby/Value;Lorg/jamruby/mruby/Value;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1arrayPush
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_procNew
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1procNew
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineClass
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1defineClass
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineModule
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1defineModule
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_singletonClass
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1singletonClass
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_includeModule
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1includeModule
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineMethod
 * Signature: (JJLjava/lang/String;Lorg/jamruby/mruby/RFunc;I)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1defineMethod
  (JNIEnv *, jclass, jlong, jlong, jstring, jobject, jint);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineClassMethod
 * Signature: (JJLjava/lang/String;Lorg/jamruby/mruby/RFunc;I)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1defineClassMethod
  (JNIEnv *, jclass, jlong, jlong, jstring, jobject, jint);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineSingletonMethod
 * Signature: (JJLjava/lang/String;Lorg/jamruby/mruby/RFunc;I)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1defineSingletonMethod
  (JNIEnv *, jclass, jlong, jlong, jstring, jobject, jint);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineModuleFunction
 * Signature: (JJLjava/lang/String;Lorg/jamruby/mruby/RFunc;I)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1defineModuleFunction
  (JNIEnv *, jclass, jlong, jlong, jstring, jobject, jint);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineConst
 * Signature: (JJLjava/lang/String;Lorg/jamruby/mruby/Value;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1defineConst
  (JNIEnv *, jclass, jlong, jlong, jstring, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_instanceNew
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1instanceNew
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_classNew
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1classNew
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_moduleNew
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1moduleNew
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_classFromSym
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1classFromSym
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_classGet
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1classGet
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_classObjGet
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1classObjGet
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_objDup
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1objDup
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_checkToInteger
 * Signature: (JLorg/jamruby/mruby/Value;Ljava/lang/String;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1checkToInteger
  (JNIEnv *, jclass, jlong, jobject, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_objRespondTo
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1objRespondTo
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineClassUnder
 * Signature: (JJLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1defineClassUnder
  (JNIEnv *, jclass, jlong, jlong, jstring, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineModuleUnder
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1defineModuleUnder
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_funcall
 * Signature: (JLorg/jamruby/mruby/Value;Ljava/lang/String;I[Lorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1funcall
  (JNIEnv *, jclass, jlong, jobject, jstring, jint, jobjectArray);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_funcallWithBlock
 * Signature: (JLorg/jamruby/mruby/Value;Ljava/lang/String;I[Lorg/jamruby/mruby/Value;Lorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1funcallWithBlock
  (JNIEnv *, jclass, jlong, jobject, jstring, jint, jobjectArray, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_intern
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1intern
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_sym2name
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jamruby_mruby_MRuby_n_1sym2name
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_strFormat
 * Signature: (JI[Lorg/jamruby/mruby/Value;Lorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1strFormat
  (JNIEnv *, jclass, jlong, jint, jobjectArray, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_malloc
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1malloc
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_calloc
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1calloc
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_realloc
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1realloc
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_objAlloc
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1objAlloc
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_free
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1free
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_strNew
 * Signature: (JLjava/lang/String;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1strNew
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_open
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1open
  (JNIEnv *, jclass);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_checkstack
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1checkstack
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_topSelf
 * Signature: (J)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1topSelf
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_run
 * Signature: (JJLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1run
  (JNIEnv *, jclass, jlong, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_p
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1p
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_toId
 * Signature: (JLorg/jamruby/mruby/Value;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1toId
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_obj_equal
 * Signature: (JLorg/jamruby/mruby/Value;Lorg/jamruby/mruby/Value;)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1obj_1equal
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_equal
 * Signature: (JLorg/jamruby/mruby/Value;Lorg/jamruby/mruby/Value;)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1equal
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_Integer
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1Integer
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_Float
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1Float
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_inspect
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1inspect
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_eql
 * Signature: (JLorg/jamruby/mruby/Value;Lorg/jamruby/mruby/Value;)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1eql
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_check_convert_type
 * Signature: (JLorg/jamruby/mruby/Value;ILjava/lang/String;Ljava/lang/String;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1check_1convert_1type
  (JNIEnv *, jclass, jlong, jobject, jint, jstring, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_anyToS
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1anyToS
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_objClassname
 * Signature: (JLorg/jamruby/mruby/Value;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jamruby_mruby_MRuby_n_1objClassname
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_objClass
 * Signature: (JLorg/jamruby/mruby/Value;)J
 */
JNIEXPORT jlong JNICALL Java_org_jamruby_mruby_MRuby_n_1objClass
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_classPath
 * Signature: (JJ)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1classPath
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_convert_type
 * Signature: (JLorg/jamruby/mruby/Value;ILjava/lang/String;Ljava/lang/String;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1convert_1type
  (JNIEnv *, jclass, jlong, jobject, jint, jstring, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_obj_is_kind_of
 * Signature: (JLorg/jamruby/mruby/Value;J)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1obj_1is_1kind_1of
  (JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_objInspect
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1objInspect
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_objClone
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1objClone
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_check_funcall
 * Signature: (JLorg/jamruby/mruby/Value;JI[Lorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1check_1funcall
  (JNIEnv *, jclass, jlong, jobject, jlong, jint, jobjectArray);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_block_given_p
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_MRuby_n_1block_1given_1p
  (JNIEnv *, jclass);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_raise
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1raise
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_rb_raise
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1rb_1raise
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_warn
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1warn
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_warning
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1warning
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_bug
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1bug
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_yield
 * Signature: (JLorg/jamruby/mruby/Value;Lorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1yield
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_yield_argv
 * Signature: (JLorg/jamruby/mruby/Value;I[Lorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1yield_1argv
  (JNIEnv *, jclass, jlong, jobject, jint, jobjectArray);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_yield_with_self
 * Signature: (JLorg/jamruby/mruby/Value;I[Lorg/jamruby/mruby/Value;Lorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1yield_1with_1self
  (JNIEnv *, jclass, jlong, jobject, jint, jobjectArray, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_class_new_instance
 * Signature: (JI[Lorg/jamruby/mruby/Value;J)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1class_1new_1instance
  (JNIEnv *, jclass, jlong, jint, jobjectArray, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_class_new_instance_m
 * Signature: (JLorg/jamruby/mruby/Value;)Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobject JNICALL Java_org_jamruby_mruby_MRuby_n_1class_1new_1instance_1m
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineAlias
 * Signature: (JJLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1defineAlias
  (JNIEnv *, jclass, jlong, jlong, jstring, jstring);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_className
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jamruby_mruby_MRuby_n_1className
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jamruby_mruby_MRuby
 * Method:    n_defineGlobalConst
 * Signature: (JLjava/lang/String;Lorg/jamruby/mruby/Value;)V
 */
JNIEXPORT void JNICALL Java_org_jamruby_mruby_MRuby_n_1defineGlobalConst
  (JNIEnv *, jclass, jlong, jstring, jobject);

#ifdef __cplusplus
}
#endif
#endif
