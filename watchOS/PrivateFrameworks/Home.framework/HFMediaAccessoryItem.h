//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

#import "HFMediaAccessoryLikeItem.h"

@class NSSet, NSString;

@interface HFMediaAccessoryItem : HFItem <HFMediaAccessoryLikeItem>
{
    id <HFHomeKitObject> _homeKitObject;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    id <HFCharacteristicValueSource> _valueSource;
}

@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject; // @synthesize homeKitObject=_homeKitObject;
- (void).cxx_destruct;
- (id)iconDescriptor;
- (id)serviceNameComponents;
- (_Bool)_isInstallingSoftwareUpdate;
- (id)performStandardUpdateWithOptions:(id)arg1;
- (void)_decorateWithMediaSystemSpecificKeys:(id)arg1;
- (void)_decorateServiceLikeItemKeys:(id)arg1;
- (void)_decorateWithMediaSessionKeys:(id)arg1;
- (void)_decorateWithSoftwareUpdateStateKeys:(id)arg1;
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1;
- (_Bool)supportsAlarmQuickControls;
- (_Bool)supportsMediaQuickControls;
- (_Bool)isSiriDisabled;
- (_Bool)isSpeaker;
- (_Bool)isAirPort;
- (_Bool)isAppleTV;
- (_Bool)isContainedWithinMediaSystem;
- (_Bool)isHomePodAndIsInMediaSystem;
- (_Bool)isHomePod;
- (_Bool)isHomePodMediaSystem;
@property(readonly, nonatomic) NSSet *availableSoftwareUpdates;
@property(readonly, nonatomic) NSSet *accessoriesSupportingSoftwareUpdate;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) unsigned int numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)accessories;
- (id)services;
- (unsigned int)_effectiveLoadingStateForSuggestedLoadingState:(unsigned int)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)settings;
- (id)room;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItems;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2;
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
