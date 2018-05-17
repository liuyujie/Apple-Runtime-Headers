//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, PKInstallAnalyzer, PKInstallOperation, PKInstallRequest;

@interface PKInstallOperationController : NSObject
{
    PKInstallRequest *_request;
    PKInstallAnalyzer *_analyzer;
    NSMutableArray *_operations;
    PKInstallOperation *_lastCancellableOp;
    double _queuedTime;
    double _dequeuedTime;
    NSObject<OS_dispatch_queue> *_updateQueue;
    BOOL _isRunning;
    BOOL _isCancelled;
    NSError *_error;
    NSMutableDictionary *_trackingHistory;
}

+ (BOOL)_verboseMode;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)_markEndOfCancellableOperations;
- (BOOL)_isCancelled;
- (id)_currentOperation;
- (void)_enqueueOperation:(id)arg1;
- (double)totalEstimatedTime;
- (id)currentPackageSpecifier;
- (id)currentPackage;
- (double)progressPercentage;
- (double)estimatedTimeRemaining;
- (int)installState;
- (BOOL)cancel;
- (BOOL)canCancel;
- (BOOL)run;
- (void)addCommitOperationsFromSandbox:(id)arg1 usingManager:(id)arg2;
- (void)addPreLogoutCommitOperationsIntoSandbox:(id)arg1;
- (void)addStageOperationsIntoSandbox:(id)arg1 inBackground:(BOOL)arg2;
- (void)addPrepareOperationsIntoSandbox:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 analyzer:(id)arg2;

@end
