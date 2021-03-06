//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPQuickTypeServantProtocol.h"

@class CNContactStore, NSArray, NSCache, NSObject<OS_dispatch_semaphore>, PPContactScorer, _PASLock;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol>
{
    CNContactStore *_store;
    _PASLock *_meCardCacheLock;
    _PASLock *_meContactDataLock;
    NSCache *_meQuickTypeItemCache;
    NSArray *_peopleKeysToFetch;
    NSCache *_cachedNameLookups;
    PPContactScorer *_contactScorer;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    BOOL _consultScorerForImmediateResult;
    id <SGSuggestionsServiceContactsProtocol> _contactService;
}

+ (id)_supportedPeopleSemanticTypes;
- (void).cxx_destruct;
- (id)_updateMeCardFromSource;
- (id)_loadMeCard;
- (id)_selfContactQueryqueryFromSemanticTagquery:(id)arg1;
- (BOOL)_isSemanticTagEligible:(unsigned char)arg1;
- (id)_lookupPeopleWithNamePrefixUncached:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3;
- (id)_lookupPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3;
- (id)_lookupScoredPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3;
- (id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 fromSemanticTextField:(BOOL)arg3 explanationSet:(id)arg4;
- (id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (id)_mePredictionCacheKeyForQuery:(id)arg1;
- (BOOL)_isMeCardQuery:(id)arg1;
- (id)_predictionForPeopleQuery:(id)arg1 fromEligibleSemanticTextField:(BOOL)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4;
- (id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)_preloadMeCardAndItemCacheWithMeContact:(id)arg1;
- (void)_registerForNotifications;
- (void)setContactScorer:(id)arg1;
- (void)setCachedNameLookup:(id)arg1;
- (void)setContactService:(id)arg1;
- (void)setStore:(id)arg1;
- (void)_warmUpFormatters;
- (id)initWithOptions:(unsigned char)arg1;
- (id)init;
- (void)clearCaches;

@end

