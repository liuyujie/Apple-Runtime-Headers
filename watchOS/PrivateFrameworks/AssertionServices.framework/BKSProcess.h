//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSProcessClientDelegate.h"
#import "BSDescriptionProviding.h"

@class BKSLaunchdJobSpecification, BKSProcessClient, BKSProcessExitContext, BSProcessHandle, NSObject<OS_dispatch_queue>, NSString;

@interface BKSProcess : NSObject <BKSProcessClientDelegate, BSDescriptionProviding>
{
    _Bool _bootstrapped;
    _Bool _workspaceLocked;
    _Bool _connectedToExternalAccessories;
    _Bool _nowPlayingWithAudio;
    _Bool _recordingAudio;
    id <BKSProcessDelegate> _delegate;
    int _visibility;
    int _taskState;
    BSProcessHandle *_handle;
    BKSProcessExitContext *_lastExitContext;
    NSString *_bundleID;
    NSString *_jobLabel;
    BKSProcessClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BKSLaunchdJobSpecification *_jobSpec;
    int _terminationReason;
}

+ (id)busyExtensionInstances:(id)arg1;
+ (double)backgroundTimeRemaining;
+ (id)currentProcess;
@property(nonatomic) int terminationReason; // @synthesize terminationReason=_terminationReason;
@property(nonatomic) _Bool recordingAudio; // @synthesize recordingAudio=_recordingAudio;
@property(nonatomic) _Bool nowPlayingWithAudio; // @synthesize nowPlayingWithAudio=_nowPlayingWithAudio;
@property(nonatomic) _Bool connectedToExternalAccessories; // @synthesize connectedToExternalAccessories=_connectedToExternalAccessories;
@property(nonatomic) _Bool workspaceLocked; // @synthesize workspaceLocked=_workspaceLocked;
@property(nonatomic) _Bool bootstrapped; // @synthesize bootstrapped=_bootstrapped;
@property(retain, nonatomic) BKSLaunchdJobSpecification *jobSpec; // @synthesize jobSpec=_jobSpec;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) BKSProcessClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSString *jobLabel; // @synthesize jobLabel=_jobLabel;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) BKSProcessExitContext *lastExitContext; // @synthesize lastExitContext=_lastExitContext;
@property(readonly, retain, nonatomic) BSProcessHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) int taskState; // @synthesize taskState=_taskState;
@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)processAssertionExpirationImminentForClient:(id)arg1;
- (void)client:(id)arg1 processDidExitWithContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)client:(id)arg1 processDidChangeDebuggingState:(_Bool)arg2;
- (void)client:(id)arg1 processDidChangeTaskState:(int)arg2;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (_Bool)_bootstrapWithError:(out id *)arg1;
@property(readonly, nonatomic) double backgroundTimeRemaining;
@property(nonatomic) __weak id <BKSProcessDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;
- (_Bool)bootstrapWithSpecification:(id)arg1 error:(out id *)arg2;
- (_Bool)bootstrapWithProcessHandle:(id)arg1 error:(out id *)arg2;
- (void)dealloc;
- (id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(int)arg3 workspaceLocked:(_Bool)arg4 queue:(id)arg5;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

