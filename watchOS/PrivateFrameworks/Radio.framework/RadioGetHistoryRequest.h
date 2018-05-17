//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSArray, NSNumber, NSString, RadioPlayEventCollection, SSURLConnectionRequest;

@interface RadioGetHistoryRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    _Bool _fetchForAccount;
    _Bool _includesAds;
    _Bool _aggregateSessions;
    _Bool _shouldProcessCategories;
    NSNumber *_accountUniqueIdentifier;
    unsigned int _maxNumberOfTracks;
    NSString *_stationHash;
    RadioPlayEventCollection *_playEventCollection;
    NSArray *_playActivityEvents;
    long long _stationID;
}

@property(nonatomic) _Bool shouldProcessCategories; // @synthesize shouldProcessCategories=_shouldProcessCategories;
@property(copy, nonatomic) NSArray *playActivityEvents; // @synthesize playActivityEvents=_playActivityEvents;
@property(copy, nonatomic) RadioPlayEventCollection *playEventCollection; // @synthesize playEventCollection=_playEventCollection;
@property(nonatomic) _Bool aggregateSessions; // @synthesize aggregateSessions=_aggregateSessions;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(nonatomic) _Bool includesAds; // @synthesize includesAds=_includesAds;
@property(nonatomic) _Bool fetchForAccount; // @synthesize fetchForAccount=_fetchForAccount;
@property(nonatomic) unsigned int maxNumberOfTracks; // @synthesize maxNumberOfTracks=_maxNumberOfTracks;
@property(readonly, copy, nonatomic) NSNumber *accountUniqueIdentifier; // @synthesize accountUniqueIdentifier=_accountUniqueIdentifier;
- (void).cxx_destruct;
- (id)_newHistoryItemWithDictionary:(id)arg1;
- (id)_newHistoryCategoryWithDictionary:(id)arg1;
- (void)startWithHistoryCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)init;

@end
