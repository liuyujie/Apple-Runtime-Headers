//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying>
{
    unsigned long long _lineId;
    NSString *_direction;
    NSString *_headsign;
    struct {
        unsigned int lineId:1;
    } _has;
}

@property(retain, nonatomic) NSString *headsign; // @synthesize headsign=_headsign;
@property(retain, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long lineId; // @synthesize lineId=_lineId;
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
@property(readonly, nonatomic) BOOL hasHeadsign;
@property(readonly, nonatomic) BOOL hasDirection;
@property(nonatomic) BOOL hasLineId;

@end

