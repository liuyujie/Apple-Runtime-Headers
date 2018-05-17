//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

@interface GEOMatchedToken : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_cb16bb10 _geoIds;
    int _geoType;
    NSString *_matchedToken;
    struct {
        unsigned int geoType:1;
    } _has;
}

@property(nonatomic) int geoType; // @synthesize geoType=_geoType;
@property(retain, nonatomic) NSString *matchedToken; // @synthesize matchedToken=_matchedToken;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setGeoIds:(unsigned long long *)arg1 count:(unsigned int)arg2;
- (unsigned long long)geoIdAtIndex:(unsigned int)arg1;
- (void)addGeoId:(unsigned long long)arg1;
- (void)clearGeoIds;
@property(readonly, nonatomic) unsigned long long *geoIds;
@property(readonly, nonatomic) unsigned int geoIdsCount;
@property(nonatomic) _Bool hasGeoType;
- (void)dealloc;

@end
