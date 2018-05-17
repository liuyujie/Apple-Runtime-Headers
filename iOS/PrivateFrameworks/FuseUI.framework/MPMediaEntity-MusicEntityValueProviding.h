//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPMediaEntity.h"

#import "MusicEntityValueProviding.h"

@class NSString;

@interface MPMediaEntity (MusicEntityValueProviding) <MusicEntityValueProviding>
+ (void)registerSupportedCustomPropertiesWithHandlersCollection:(id)arg1;
+ (id)customPropertyHandlersCollection;
+ (_Bool)supportsConcurrentLoadingOfEntityProperties;
- (id)_valuesForRegularEntityProperties:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)entityUniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
