//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class NSString;

@interface HMDSiriCommandEvent : HMDLogEvent <HMDAWDLogEvent>
{
    unsigned int _duration;
    NSString *_actionType;
    NSString *_outcome;
    unsigned int _numberOfEntities;
    unsigned int _numberOfFailures;
    unsigned int _numberOfIncompletions;
    unsigned int _configurationVersion;
    unsigned int _lastSyncedConfigurationVersion;
    unsigned int _serverConfigurationVersion;
}

+ (id)commandEventWithStartTime:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned int)arg4 numberOfFailures:(unsigned int)arg5 numberOfIncompletions:(unsigned int)arg6 serverConfigurationVersion:(unsigned int)arg7 configurationVersion:(unsigned int)arg8 lastSyncedConfigurationVersion:(unsigned int)arg9;
+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) unsigned int serverConfigurationVersion; // @synthesize serverConfigurationVersion=_serverConfigurationVersion;
@property(readonly, nonatomic) unsigned int lastSyncedConfigurationVersion; // @synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion;
@property(readonly, nonatomic) unsigned int configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(readonly, nonatomic) unsigned int numberOfIncompletions; // @synthesize numberOfIncompletions=_numberOfIncompletions;
@property(readonly, nonatomic) unsigned int numberOfFailures; // @synthesize numberOfFailures=_numberOfFailures;
@property(readonly, nonatomic) unsigned int numberOfEntities; // @synthesize numberOfEntities=_numberOfEntities;
@property(readonly, nonatomic) NSString *outcome; // @synthesize outcome=_outcome;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) unsigned int duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)initWithStartTime:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned int)arg4 numberOfFailures:(unsigned int)arg5 numberOfIncompletions:(unsigned int)arg6 serverConfigurationVersion:(unsigned int)arg7 configurationVersion:(unsigned int)arg8 lastSyncedConfigurationVersion:(unsigned int)arg9;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
