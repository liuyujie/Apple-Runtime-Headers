//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSliderAccessory;

@protocol NSSliderAccessoryContainer <NSObject>
@property(readonly) BOOL _hasStepBehaviorContext;
@property(readonly) NSSliderAccessory *maximumValueAccessory;
@property(readonly) NSSliderAccessory *minimumValueAccessory;
@property double incrementValue;
@property double maximumValue;
@property double minimumValue;
@property double value;
- (void)_incrementValue:(BOOL)arg1;
- (void)sendAction;
@end
