//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSArray, NSMutableArray, NSString;

@interface HMDBackingStoreCacheZone : HMFObject
{
    NSString *_zoneName;
    NSMutableArray *_actualGroups;
    NSMutableArray *_actualShares;
    long long _zoneID;
}

@property(retain) NSMutableArray *actualShares; // @synthesize actualShares=_actualShares;
@property(retain) NSMutableArray *actualGroups; // @synthesize actualGroups=_actualGroups;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) long long zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;
@property(readonly) NSArray *shares;
@property(readonly) NSArray *groups;
- (id)dumpDebug;
- (id)initWithZoneID:(long long)arg1 name:(id)arg2;

@end

