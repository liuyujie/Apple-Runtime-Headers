//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSTask.h>

@class NSMutableDictionary, NSObject<OS_dispatch_source>, NSPort;

__attribute__((visibility("hidden")))
@interface NSConcreteTask : NSTask
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_dictionary;
    CDUnknownBlockType _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    NSPort *_tmpPort;
    long long _suspendCount;
    int _pid;
    int _platformExitInfo;
    _Bool _hasExeced;
    _Bool _isRunning;
    _Bool _hasPostedDeathNotification;
    _Bool _terminationRun;
    BOOL _qos;
}

- (void)setStartsNewProcessGroup:(_Bool)arg1;
- (int)processIdentifier;
- (int)_procid;
- (void)dealloc;
- (id)init;
- (long long)suspendCount;
- (_Bool)resume;
- (_Bool)suspend;
- (void)terminateTask;
- (void)terminate;
- (void)interrupt;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (id)standardError;
- (id)standardOutput;
- (id)standardInput;
- (id)currentDirectoryPath;
- (id)preferredArchitectures;
- (id)arguments;
- (id)environment;
- (id)launchPath;
- (void)setLaunchPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setPreferredArchitectures:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)_withTaskDictionary:(CDUnknownBlockType)arg1;
- (void)waitUntilExit;
- (_Bool)launchWithDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)launchAndReturnError:(id *)arg1;
- (void)launch;
- (_Bool)isRunning;
- (long long)terminationReason;
- (long long)_platformExitInformation;
- (int)terminationStatus;
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;
- (void)_setTerminationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)terminationHandler;
- (void)setQualityOfService:(long long)arg1;
- (long long)qualityOfService;

@end

