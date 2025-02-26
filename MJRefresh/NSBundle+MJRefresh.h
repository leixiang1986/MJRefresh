//
//  NSBundle+MJRefresh.h
//  MJRefreshExample
//
//  Created by MJ Lee on 16/6/13.
//  Copyright © 2016年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (MJRefresh)
+ (instancetype)mj_refreshBundle;
+ (UIImage *)mj_arrowImage;
+ (UIImage *)mj_trailArrowImage;
+ (NSString *)mj_localizedStringForKey:(NSString *)key value:(nullable NSString *)value;
+ (NSString *)mj_localizedStringForKey:(NSString *)key;
///应用内切换语言
+ (void)mj_resetBundle;
@end

NS_ASSUME_NONNULL_END
