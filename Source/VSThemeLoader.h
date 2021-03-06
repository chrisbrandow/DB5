//
//  VSThemeLoader.m
//  Q Branch LLC
//
//  Created by Brent Simmons on 6/26/13.
//  Copyright (c) 2012 Q Branch LLC. All rights reserved.
//
//  Modified by Chris Brandow 2014 - 04 - 11

#import <Foundation/Foundation.h>


@class VSTheme;

@interface VSThemeLoader : NSObject

@property (nonatomic, strong, readonly) VSTheme *defaultTheme;
@property (nonatomic, strong, readonly) NSArray *themes;

- (VSTheme *)themeNamed:(NSString *)themeName;
- (VSTheme *)themeNamed:(NSString *)themeName withPrefix:(NSString *)themePrefix;



@end
