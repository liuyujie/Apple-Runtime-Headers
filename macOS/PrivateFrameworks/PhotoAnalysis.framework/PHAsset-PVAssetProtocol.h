//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAsset.h"

#import "PVAssetProtocol.h"

@class NSData, NSDate, NSString;

@interface PHAsset (PVAssetProtocol) <PVAssetProtocol>
@property(readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate;
@property(readonly, nonatomic) NSDate *clsDistanceIdentity;

// Remaining properties
@property(readonly, nonatomic) NSString *cloudIdentifier;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly) Class superclass;
@end
