//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import "HFServiceLikeBuilder.h"

@class HFRoomBuilder, HMService, NSArray, NSString;

@interface HFServiceBuilder : HFItemBuilder <HFServiceLikeBuilder>
{
    _Bool isFavorite;
    NSString *name;
    HFRoomBuilder *room;
    id <HFIconDescriptor> _iconDescriptor;
    NSString *_associatedServiceType;
    long long _configurationState;
}

+ (Class)homeKitRepresentationClass;
@property(nonatomic) long long configurationState; // @synthesize configurationState=_configurationState;
@property(copy, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite;
@property(retain, nonatomic) HFRoomBuilder *room; // @synthesize room;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)_lazilyUpdateConfigurationState;
- (id)_lazilyUpdateAssociatedServiceType;
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateRoom;
- (id)_lazilyUpdateDateAdded;
- (id)_lazilyUpdateFavorite;
- (id)_lazilyUpdateName;
- (id)commitItem;
- (id)_performValidation;
@property(readonly, copy) NSString *description;
- (id)removeItemFromHome;
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(readonly, nonatomic) _Bool supportsFavoriting;
- (id)accessories;
@property(readonly, nonatomic) NSString *originalName;
@property(readonly, nonatomic) HMService *service;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

