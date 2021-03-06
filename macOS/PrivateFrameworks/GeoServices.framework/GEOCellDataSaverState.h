//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapRegion, NSString;

__attribute__((visibility("hidden")))
@interface GEOCellDataSaverState : PBCodable <NSCopying>
{
    double _timestamp;
    GEOMapRegion *_region;
    NSString *_regionId;
    CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSString *regionId; // @synthesize regionId=_regionId;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) GEOMapRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRegionId;
@property(nonatomic) BOOL hasTimestamp;
@property(readonly, nonatomic) BOOL hasRegion;

@end

