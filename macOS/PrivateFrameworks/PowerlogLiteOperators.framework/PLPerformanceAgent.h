//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent
{
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
}

+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventPointDefinitions;
+ (void)load;
@property(retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // @synthesize dailyTaskNotification=_dailyTaskNotification;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
- (void).cxx_destruct;
- (void)log;
- (void)logEventPointDiskFragmentation;
- (void)logEventPointDiskUsage;
- (void)logEventPointSystemMemory;
- (id)descriptionForMemoryPressure:(int)arg1;
- (void)initOperatorDependancies;
- (id)init;

@end

