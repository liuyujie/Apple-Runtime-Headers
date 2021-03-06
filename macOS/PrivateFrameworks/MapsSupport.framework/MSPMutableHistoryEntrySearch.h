//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapsSupport/MSPMutableHistoryEntry.h>

#import "MSPHistoryEntrySearch.h"

@class GEOMapRegion, NSString;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch>
{
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
@property(copy, nonatomic) GEOMapRegion *mapRegion;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *locationDisplayString;
@property(copy, nonatomic) NSString *query;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

