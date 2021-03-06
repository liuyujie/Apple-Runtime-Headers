//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSSystemAppProxy;

@interface FBSSystemService : NSObject
{
    FBSSystemAppProxy *_systemAppProxy;
}

+ (id)clientCallbackQueue;
+ (id)sharedService;
- (void).cxx_destruct;
- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shutdownWithOptions:(id)arg1;
- (void)shutdown;
- (void)reboot;
- (void)dataResetWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllSnapshotsForApplication:(id)arg1;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (id)badgeValueForBundleID:(id)arg1;
- (id)processHandleForApplication:(id)arg1;
- (void)cleanupClientPort:(unsigned int)arg1;
- (unsigned int)createClientPort;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;
- (void)sendActions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (_Bool)canOpenApplication:(id)arg1 reason:(int *)arg2;
- (int)pidForApplication:(id)arg1;
- (_Bool)isPasscodeLockedOrBlocked;
- (id)systemApplicationBundleIdentifier;
- (id)init;

@end

