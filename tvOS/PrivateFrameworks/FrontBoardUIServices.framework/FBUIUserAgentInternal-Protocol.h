//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBUIUserAgent.h"

@class FBSSerialQueue;

@protocol FBUIUserAgentInternal <FBUIUserAgent>
@property(nonatomic, getter=isSystemApp) _Bool systemApp;
- (id <FBUIProcessManagerInternal>)processManager;
- (id <FBUISceneManager>)sceneManager;
- (FBSSerialQueue *)mainQueue;
@end

