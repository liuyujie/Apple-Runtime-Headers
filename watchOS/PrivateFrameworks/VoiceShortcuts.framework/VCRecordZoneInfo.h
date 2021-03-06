//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKRecordZoneID, NSArray, NSError, NSString;

@interface VCRecordZoneInfo : NSObject
{
    CKRecordZoneID *_activeZoneID;
    NSString *_nextZoneName;
    NSArray *_staleReadableZoneIDs;
    NSError *_zoneAccessError;
}

+ (id)ignoredZoneNames;
+ (id)zoneNameFromIndex:(unsigned int)arg1;
+ (int)indexFromZoneID:(id)arg1;
+ (id)nextZoneNameFromAllZoneIDs:(id)arg1;
+ (id)zoneAccessErrorFromZoneFailures:(id)arg1;
+ (id)indexedZoneIDsFromZoneIDs:(id)arg1;
+ (id)sortedZoneIDsFromZoneIDs:(id)arg1;
@property(readonly, nonatomic) NSError *zoneAccessError; // @synthesize zoneAccessError=_zoneAccessError;
@property(readonly, nonatomic) NSArray *staleReadableZoneIDs; // @synthesize staleReadableZoneIDs=_staleReadableZoneIDs;
@property(readonly, nonatomic) NSString *nextZoneName; // @synthesize nextZoneName=_nextZoneName;
@property(readonly, nonatomic) CKRecordZoneID *activeZoneID; // @synthesize activeZoneID=_activeZoneID;
- (void).cxx_destruct;
- (id)initWithReadableZones:(id)arg1 zoneFetchError:(id)arg2;

@end

