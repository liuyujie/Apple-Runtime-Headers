//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSSceneSettings.h"

#import "UIApplicationSceneSettings.h"
#import "_UIDisplayEdgeInfoProviding.h"

@class NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayEdgeInfoProviding, UIApplicationSceneSettings>
{
}

- (Class)canvasClass;
- (_Bool)isUISubclass;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int artworkSubtype;
@property(readonly, nonatomic) int deviceOrientation;
@property(readonly, nonatomic) _Bool statusBarDisabled;
@property(readonly, nonatomic) _Bool idleModeEnabled;
@property(readonly, nonatomic) _Bool canShowAlerts;
@property(readonly, nonatomic) _Bool deviceOrientationEventsEnabled;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) float homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property(readonly, nonatomic) float systemMinimumMargin;
@property(readonly, nonatomic) struct CGRect statusBarAvoidanceFrame;
@property(readonly, nonatomic) int statusBarParts;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets;
@property(readonly, nonatomic) _Bool forcedStatusBarForegroundTransparent;
@property(readonly, nonatomic) NSNumber *forcedStatusBarStyle;
@property(readonly, nonatomic) int userInterfaceStyle;
@property(readonly, nonatomic) unsigned int deactivationReasons;
@property(readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property(readonly, nonatomic) _Bool underLock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

