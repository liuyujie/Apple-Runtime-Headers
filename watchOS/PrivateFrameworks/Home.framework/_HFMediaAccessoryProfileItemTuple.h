//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAIdentifiable.h"

@class HFAccessorySettingsEntity, HFItem, HMAccessorySelectionSettingItem, HMAccessorySetting, HMAccessorySettingGroup, NSString;

@interface _HFMediaAccessoryProfileItemTuple : NSObject <NAIdentifiable>
{
    HFItem *_outputItem;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HMAccessorySetting *_accessorySetting;
    HMAccessorySettingGroup *_accessoryGroup;
    HMAccessorySelectionSettingItem *_optionItem;
    HFAccessorySettingsEntity *_accessoryGroupEntity;
}

+ (_Bool)_walkSettingsTreeForReflectedSettingWithinContainer:(id)arg1 accessoryGroup:(id)arg2;
+ (id)na_identity;
@property(readonly, nonatomic) HFAccessorySettingsEntity *accessoryGroupEntity; // @synthesize accessoryGroupEntity=_accessoryGroupEntity;
@property(readonly, nonatomic) HMAccessorySelectionSettingItem *optionItem; // @synthesize optionItem=_optionItem;
@property(readonly, nonatomic) HMAccessorySettingGroup *accessoryGroup; // @synthesize accessoryGroup=_accessoryGroup;
@property(readonly, nonatomic) HMAccessorySetting *accessorySetting; // @synthesize accessorySetting=_accessorySetting;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
@property(readonly, nonatomic) HFItem *outputItem; // @synthesize outputItem=_outputItem;
- (_Bool)isValidForContainer;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *keyPath;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, copy) NSString *description;
- (id)initWithMediaProfileContainer:(id)arg1 accessoryGroupEntity:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 group:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2 optionItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

