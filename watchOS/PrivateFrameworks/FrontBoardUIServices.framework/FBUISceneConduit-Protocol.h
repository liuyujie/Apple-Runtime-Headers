//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBUISceneClientProxy.h"
#import "FBUISceneHostProxy.h"

@class FBSSceneParameters;

@protocol FBUISceneConduit <FBUISceneHostProxy, FBUISceneClientProxy>
- (id <FBUISceneClientProxy>)sceneClient;
- (id <FBUISceneHostProxy>)sceneHost;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 registerSceneClient:(id <FBUISceneClientProxy>)arg2 withInitialParameters:(FBSSceneParameters *)arg3;
@end

