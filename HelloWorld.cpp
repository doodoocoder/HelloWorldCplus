/**
 * @Author chenhuaijin
 * @Description //实现头文件HelloWorld.h中的相关方法
 * @Date 2019/6/7
 **/
#include "HelloWorld.h"
#include "jni.h"
#include "jni_md.h"
#include <iostream>
#include "jni_util.h"

/*
 * Class:     HelloWorld
 * Method:    init
 * Signature: (I)I
 */
 using namespace std;
JNIEXPORT int canonicalize;//这里是为了jni_util.c中的extern int (char *path, const char *out, int len)
JNIEXPORT jint JNICALL Java_HelloWorld_init
        (JNIEnv *env, jobject job, jint lPort){
    int number=10;
    number+=lPort;
    return number;
}

/*
 * Class:     HelloWorld
 * Method:    print
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_HelloWorld_print
(JNIEnv *env, jobject job, jstring str){
    jboolean b = true;
    const char* cLibName = JNU_GetStringPlatformChars(env, str, &b);
    cout<<"start*"<<endl;
    cout<<cLibName<<endl;
    cout<<"my stop....."<<endl;
    printf("<<<<<<<<<<<<<<<<<   %s*****loaded! >>>>>>>>>>>>>>>>>\n", cLibName);
}

 