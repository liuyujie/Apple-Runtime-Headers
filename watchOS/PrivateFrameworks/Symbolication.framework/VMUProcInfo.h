//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface VMUProcInfo : NSObject
{
    unsigned int _task;
    _Bool _needTaskPortDealloc;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval _startTime;
}

+ (int)processParentId:(int)arg1;
+ (_Bool)isProcessRunning:(int)arg1;
+ (id)getProcessIds;
- (void).cxx_destruct;
- (unsigned int)hash;
- (int)compareByUserAppName:(id)arg1;
- (int)compareByName:(id)arg1;
- (int)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)signal:(int)arg1;
- (_Bool)terminate;
- (_Bool)isRunning;
- (_Bool)isNative;
- (int)cpuType;
- (_Bool)isCFM;
- (_Bool)isMachO;
- (_Bool)isApp;
- (void)update;
- (unsigned int)task;
- (int)ppid;
- (int)pid;
- (id)description;
- (id)name;
- (id)userAppName;
- (id)valueForEnvVar:(id)arg1;
- (id)envVars;
- (id)arguments;
- (id)firstArgument;
- (id)requestedAppName;
- (id)realAppName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)procTableName;
- (struct timeval)startTime;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPid:(int)arg1;
- (id)init;

@end
