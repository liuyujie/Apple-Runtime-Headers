//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface _UIBarBackButtonItemAppearanceStorage : NSObject
{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
}

@property(retain, nonatomic) NSValue *miniTitlePositionOffset; // @synthesize miniTitlePositionOffset;
@property(retain, nonatomic) NSValue *titlePositionOffset; // @synthesize titlePositionOffset;
- (void).cxx_destruct;
- (float)backgroundVerticalAdjustmentForBarMetrics:(int)arg1;
- (void)setBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (id)anyBackgroundImage;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(_Bool)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(_Bool)arg3;

@end

