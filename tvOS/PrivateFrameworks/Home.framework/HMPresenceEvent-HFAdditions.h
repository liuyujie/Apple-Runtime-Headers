//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMPresenceEvent.h"

#import "HFLocationBasedEvent.h"

@class NSString;

@interface HMPresenceEvent (HFAdditions) <HFLocationBasedEvent>
+ (unsigned long long)hf_presenceDisableReasonsForHome:(id)arg1;
+ (unsigned long long)hf_locationEventTypeForPresenceEventType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long hf_eventType;
@property(readonly, nonatomic) unsigned long long hf_activationGranularity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

