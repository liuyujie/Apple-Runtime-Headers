//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSDate, NSDictionary, NSObject, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString;

@interface SMNBomAction : SMNAction
{
    int returnCode;
    NSString *_compressionLevel;
    NSObject *_bomCallbacksDelegate;
    NSString *_sourcePath;
    NSString *_destinationPath;
    NSString *_restartPoint;
    NSString *_errorPath;
    NSString *_lastPathReceived;
    NSSet *_excludedPathsSet;
    NSDate *_lastLoggedThroughputDate;
    unsigned long long _intraFileBytesCompletedThisInterval;
    unsigned long long _intraFileBytesCompletedOverlappingFromLastInterval;
    unsigned long long _totalBytesCompletedThisInterval;
    struct _BOMCopier *_copier;
    struct BOMSys *_skipUbiquityBomSys;
    NSDictionary *_bomCopyOptions;
    NSObject<OS_dispatch_queue> *_atomicQueue;
    NSObject<OS_dispatch_source> *_watchdogSource;
    NSObject<OS_dispatch_queue> *_resumeQueue;
}

+ (id)actionWithPayload:(id)arg1;
+ (id)formattedExcludedPathsFromRaw:(id)arg1;
+ (BOOL)shouldCloseInboundStreamWhenDone;
+ (BOOL)shouldCloseOutboundStreamWhenDone;
+ (BOOL)needsDirectAccessToSendOrReceiveResult;
+ (int)actionID;
@property(retain) NSObject<OS_dispatch_queue> *resumeQueue; // @synthesize resumeQueue=_resumeQueue;
@property(retain) NSObject<OS_dispatch_source> *watchdogSource; // @synthesize watchdogSource=_watchdogSource;
@property(retain) NSObject<OS_dispatch_queue> *atomicQueue; // @synthesize atomicQueue=_atomicQueue;
@property(retain) NSDictionary *bomCopyOptions; // @synthesize bomCopyOptions=_bomCopyOptions;
@property struct BOMSys *skipUbiquityBomSys; // @synthesize skipUbiquityBomSys=_skipUbiquityBomSys;
@property struct _BOMCopier *copier; // @synthesize copier=_copier;
@property unsigned long long totalBytesCompletedThisInterval; // @synthesize totalBytesCompletedThisInterval=_totalBytesCompletedThisInterval;
@property unsigned long long intraFileBytesCompletedOverlappingFromLastInterval; // @synthesize intraFileBytesCompletedOverlappingFromLastInterval=_intraFileBytesCompletedOverlappingFromLastInterval;
@property unsigned long long intraFileBytesCompletedThisInterval; // @synthesize intraFileBytesCompletedThisInterval=_intraFileBytesCompletedThisInterval;
@property(retain) NSDate *lastLoggedThroughputDate; // @synthesize lastLoggedThroughputDate=_lastLoggedThroughputDate;
@property(retain) NSSet *excludedPathsSet; // @synthesize excludedPathsSet=_excludedPathsSet;
@property(retain) NSString *lastPathReceived; // @synthesize lastPathReceived=_lastPathReceived;
@property(retain) NSString *errorPath; // @synthesize errorPath=_errorPath;
@property(retain) NSString *restartPoint; // @synthesize restartPoint=_restartPoint;
@property(retain) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property __weak NSObject *bomCallbacksDelegate; // @synthesize bomCallbacksDelegate=_bomCallbacksDelegate;
@property(retain) NSString *compressionLevel; // @synthesize compressionLevel=_compressionLevel;
@property int returnCode; // @synthesize returnCode;
- (void).cxx_destruct;
- (BOOL)_writeCompletelyToFd:(int)arg1 buffer:(const void *)arg2 length:(unsigned long long)arg3;
- (BOOL)_readCompletelyFromFd:(int)arg1 buffer:(void *)arg2 length:(unsigned long long)arg3;
- (id)_indexBomPathForRegularFile:(id)arg1;
- (BOOL)sendResultOnFd:(int)arg1;
- (BOOL)receiveResultOnFd:(int)arg1 errorIsFatal:(char *)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)shouldSkip:(const char *)arg1 ofType:(int)arg2 andSize:(long long)arg3;
- (id)requestPayload;
- (id)initWithSource:(id)arg1 andDestination:(id)arg2 andRestartPoint:(id)arg3 andExcludedPaths:(id)arg4 andOptions:(id)arg5;

@end

