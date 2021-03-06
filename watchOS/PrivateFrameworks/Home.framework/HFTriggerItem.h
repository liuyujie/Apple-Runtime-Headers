//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

#import "HFHomeKitItemProtocol.h"

@class HMHome, HMTrigger, NSString;

@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol>
{
    HMHome *_home;
    HMTrigger *_trigger;
}

+ (id)iconDescriptorForTriggerType:(unsigned int)arg1;
@property(readonly, nonatomic) HMTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)_uniqueServiceGroupForServices:(id)arg1;
- (id)_descriptionForTrigger:(id)arg1 effectivelyEnabled:(_Bool)arg2;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 trigger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

