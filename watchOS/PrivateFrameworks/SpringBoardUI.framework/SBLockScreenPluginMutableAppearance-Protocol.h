//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockScreenPluginAppearance.h"

@class NSArray, SBLockScreenLegibilitySettings;

@protocol SBLockScreenPluginMutableAppearance <SBLockScreenPluginAppearance>
@property(nonatomic) struct CGRect presentationRegion;
@property(retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property(copy, nonatomic) NSArray *elementOverrides;
@property(nonatomic) int notificationBehavior;
@property(nonatomic) int presentationStyle;
@property(nonatomic) int backgroundStyle;
@property(nonatomic) unsigned int restrictedCapabilities;
@property(nonatomic, getter=isHidden) _Bool hidden;
@end

