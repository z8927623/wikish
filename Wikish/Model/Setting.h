//
//  Setting.h
//  Wikish
//
//  Created by YANG ENZO on 13-3-2.
//  Copyright (c) 2013年 Side Trip. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    kHomePageTypeEmpty,
    kHomePageTypeRecommend,
    kHomePageTypeHistory
} HomePageType;

@interface Setting : NSObject

+ (void)useDefaultSetting;

+ (void)setHomePage:(HomePageType)type;
+ (HomePageType)homePage;

+ (void)setUseHttps:(BOOL)use;
+ (BOOL)isHttpsUsed;

+ (void)setInitExpanded:(BOOL)isExpanded;
+ (BOOL)isInitExpanded;
+ (BOOL)isLaunchTimeInitExpanded;

+ (void)registerUserAgent;

@end
