//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

#import "HFCharacteristicWriteActionBuilderFactory.h"
#import "HFGroupableItemProtocol.h"
#import "HFServiceLikeBuilderCreating.h"
#import "HFServiceLikeItem.h"

@class HMServiceGroup, NSString;

@interface HFServiceGroupItem : HFItem <HFServiceLikeItem, HFCharacteristicWriteActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol>
{
    id <HFCharacteristicValueSource> _valueSource;
    HMServiceGroup *_serviceGroup;
}

+ (id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2;
+ (_Bool)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;
+ (_Bool)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;
@property(readonly, nonatomic) HMServiceGroup *serviceGroup; // @synthesize serviceGroup=_serviceGroup;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
- (id)_sortDescriptorsForServiceItems;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
- (id)_mergedIconDescriptorForServiceItems:(id)arg1;
- (int)_highestIntegerValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (float)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)accessories;
- (id)services;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (_Bool)containsActionableCharacteristics;
- (id)controlPanelItems;
- (id)allControlItems;
- (id)incrementalStateControlItem;
- (id)primaryStateControlItem;
- (id)_aggregatedValueSource;
- (id)_buildControlItemsForServiceItems:(id)arg1;
- (id)_buildServiceItems;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) unsigned int numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

