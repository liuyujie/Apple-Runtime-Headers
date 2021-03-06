//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

#import "CPLEngineSyncTaskDelegate.h"

@class CPLEngineScopeStorage, CPLEngineScopedTask, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEngineMultiscopeSyncTask : CPLEngineSyncTask <CPLEngineSyncTaskDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_currentTaskQueue;
    CPLEngineScopedTask *_currentTask;
    NSMutableArray *_coveredScopes;
    NSMutableArray *_excludedScopes;
    NSMutableDictionary *_transportScopes;
    NSString *_clientCacheIdentifier;
    CPLEngineScopeStorage *_scopes;
}

@property(readonly, nonatomic) CPLEngineScopeStorage *scopes; // @synthesize scopes=_scopes;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancel;
- (void)setForeground:(BOOL)arg1;
- (void)setForceSync:(BOOL)arg1;
- (void)launch;
- (void)_launchTaskForNextScope;
@property(readonly, nonatomic) BOOL shouldSkipScopesWithMissingTransportScope;
- (BOOL)shouldContinueAfterError:(id)arg1 fromTask:(id)arg2;
- (BOOL)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3;
- (BOOL)shouldStartTaskInTransaction:(id)arg1;
- (void)dispatchAsyncWithCurrentSubtask:(CDUnknownBlockType)arg1;
- (id)_currentScope;
- (void)_setCurrentTask:(id)arg1;
- (id)_currentTask;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

