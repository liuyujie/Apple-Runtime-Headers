//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSceneManagerObserver.h"

@class FBSMutableSceneSettings, FBScene, FBSceneManager;

@protocol FBSceneManagerInternalObserver <FBSceneManagerObserver>

@optional
- (void)sceneManager:(FBSceneManager *)arg1 amendSettings:(FBSMutableSceneSettings *)arg2 forUpdatingScene:(FBScene *)arg3;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(FBSceneManager *)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(FBSceneManager *)arg1;
@end

