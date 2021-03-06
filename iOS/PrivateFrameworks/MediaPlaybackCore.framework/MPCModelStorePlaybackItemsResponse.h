//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPModelResponse.h"

#import "MPModelResponseDetailedKeepLocalStatusRequesting.h"
#import "MPModelStoreEquivalencyMapping.h"

@class MPStoreLibraryPersonalizationResponse, NSDate, NSDictionary, NSObject<OS_dispatch_source>, NSString;

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelStoreEquivalencyMapping, MPModelResponseDetailedKeepLocalStatusRequesting>
{
    NSObject<OS_dispatch_source> *_invalidationTimer;
    _Bool _finalResponse;
    _Bool _invalidForPersonalization;
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;
    NSDictionary *_localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
    NSDate *_invalidationDate;
}

@property(copy, nonatomic) NSDate *invalidationDate; // @synthesize invalidationDate=_invalidationDate;
@property(copy, nonatomic) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap; // @synthesize localStoreAdamIDToEquivalencySourceStoreAdamIDMap=_localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
@property(readonly, nonatomic, getter=isInvalidForPersonalization) _Bool invalidForPersonalization; // @synthesize invalidForPersonalization=_invalidForPersonalization;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
@property(readonly, nonatomic) MPStoreLibraryPersonalizationResponse *_personalizationResponse; // @synthesize _personalizationResponse;
- (void).cxx_destruct;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)arg1;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

