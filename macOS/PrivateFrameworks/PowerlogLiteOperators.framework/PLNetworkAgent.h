//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent
{
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
}

+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (id)defaults;
+ (void)load;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
- (void).cxx_destruct;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)log;
- (void)initOperatorDependancies;
- (id)init;

@end
