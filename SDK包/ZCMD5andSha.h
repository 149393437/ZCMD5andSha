//
//  ZCMD5andSha.h
//  encryptDemo
//
//  Created by ZhangCheng on 14-4-26.
//  Copyright (c) 2014年 com.zc All rights reserved.
//
//版本说明  iOS研究院 305044955
/*
本demo主要集成了各种算法说明，其中最常用的是md5 16位小写，一般MD5默认是使用在登录页面对密码进行加密使用
 */
/*示例代码
 [ZCMD5andSha getMd5_16Bit_String:@"MD5_16位小写" isUppercase:NO];
 [ZCMD5andSha getMd5_16Bit_String:@"MD5_16位大写" isUppercase:YES];
 
 [ZCMD5andSha getMd5_32Bit_String:@"MD5_32位小写" isUppercase:NO];
 [ZCMD5andSha getMd5_32Bit_String:@"MD5_32位大写" isUppercase:YES];
 [ZCMD5andSha getSha1String:@"sha-1加密"];
 [ZCMD5andSha getSha256String:@"sha-256加密"];
 [ZCMD5andSha getSha384String:@"sha-384加密"];
 [ZCMD5andSha getSha512String:@"sha-512加密"];
 */


#import <Foundation/Foundation.h>

@interface ZCMD5andSha : NSObject
//16位MD5加密方式
+ (NSString *)getMd5_16Bit_String:(NSString *)srcString isUppercase:(BOOL)isUppercase;
//32位MD5加密方式
+ (NSString *)getMd5_32Bit_String:(NSString *)srcString isUppercase:(BOOL)isUppercase;
//sha1加密方式
+ (NSString *)getSha1String:(NSString *)srcString;
//sha256加密方式
+ (NSString *)getSha256String:(NSString *)srcString;
//sha384加密方式
+ (NSString *)getSha384String:(NSString *)srcString;
//sha512加密方式
+ (NSString*) getSha512String:(NSString*)srcString;
@end
