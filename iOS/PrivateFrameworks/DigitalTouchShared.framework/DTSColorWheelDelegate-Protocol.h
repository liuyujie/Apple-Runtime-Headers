//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTSColorWheel, UIColor;

@protocol DTSColorWheelDelegate <NSObject>

@optional
- (void)colorWheel:(DTSColorWheel *)arg1 pickerColorChanged:(UIColor *)arg2;
- (void)colorWheel:(DTSColorWheel *)arg1 didPickColor:(UIColor *)arg2;
- (void)colorWheel:(DTSColorWheel *)arg1 willPickColor:(UIColor *)arg2;
@end
