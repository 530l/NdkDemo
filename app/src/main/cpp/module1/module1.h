//
// Created by 530 on 2024/7/18.
//

#ifndef NDKDEMO_MODULE1_H
#define NDKDEMO_MODULE1_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <android/log.h>

#define  LOG    "JNILOG" // 这个是自定义的LOG的TAG
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG,__VA_ARGS__) // 定义LOGD类型
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG,__VA_ARGS__) // 定义LOGI类型
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...)  __android_log_print(ANDROID_LOG_FATAL,LOG,__VA_ARGS__) // 定义LOGF类型

//c++中的常量的含义和java是一样的。在c++中提供了2种方式来定义常量。
//使用 #define 定义符号常量
#define PI 3.14159
//const常量在使用上和安全上要比#define更好，建议优先使用const。
const float PI2 = 3.14;

void module1_function();  // 假设 module1_function() 是在 Module1Library 中定义的函数

void module1_test();


#endif //NDKDEMO_MODULE1_H

