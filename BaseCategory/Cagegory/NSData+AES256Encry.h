//
//  NSData+AES256Encry.h
//  BaseCategory
//
//  Created by zhongqing on 2018/12/22.
//  Copyright © 2018年 JPBaseCategory. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (AES256Encry)

- (NSData *)AES256ParmEncryptWithKey:(NSString *)key;   //加密
- (NSData *)AES256ParmDecryptWithKey:(NSString *)key;   //解密
- (NSData *)AES256ParmDecryptWithKey1:(NSString *)key;   //解密

@end

NS_ASSUME_NONNULL_END
