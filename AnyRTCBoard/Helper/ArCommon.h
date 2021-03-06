//
//  ArCommon.h
//  AnyRTCBoard
//
//  Created by 余生丶 on 2019/5/15.
//  Copyright © 2019 anyRTC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ArCommon : NSObject

+ (NSString *)getUUID;

//错误信息
+ (NSString *)getErrorCode:(ARBoardCode)code;

//随机字符串
+ (NSString*)randomString:(int)len;


@end

NS_ASSUME_NONNULL_END
