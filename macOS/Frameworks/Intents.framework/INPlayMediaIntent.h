//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INPlayMediaIntentExport.h"

@class INMediaItem, NSArray, NSDate, NSNumber, NSString;

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>
{
}

+ (id)_ignoredParameters;
- (id)_spotlightContentType;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
@property(copy) NSString *recoID;
@property(copy) NSArray *buckets;
@property(copy) NSDate *expirationDate;
- (void)setResumePlayback:(id)arg1;
@property(readonly, copy) NSNumber *resumePlayback;
- (void)setPlaybackRepeatMode:(long long)arg1;
@property(readonly) long long playbackRepeatMode;
- (void)setPlayShuffled:(id)arg1;
@property(readonly, copy) NSNumber *playShuffled;
- (void)setMediaContainer:(id)arg1;
@property(readonly, copy) INMediaItem *mediaContainer;
- (void)setMediaItems:(id)arg1;
@property(readonly, copy) NSArray *mediaItems;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

