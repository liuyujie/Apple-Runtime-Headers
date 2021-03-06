//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INSearchCallHistoryIntentExport.h"

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setUnseen:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *unseen;
@property(nonatomic) int preferredCallProvider;
- (void)setCallTypes:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int callTypes;
- (void)setCallCapabilities:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int callCapabilities;
- (void)setRecipient:(id)arg1;
@property(readonly, copy, nonatomic) INPerson *recipient;
- (void)setDateCreated:(id)arg1;
@property(readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned int)arg3 callTypes:(unsigned int)arg4 unseen:(id)arg5;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
@property(readonly, nonatomic) int callType;
- (id)initWithCallType:(int)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned int)arg4;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned int)arg3 callTypes:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

