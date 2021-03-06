//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying>
{
    NSData *_originalDirectionsResponseID;
    int _originalRoutePurpose;
    NSData *_routeHandle;
    unsigned int _routeIndex;
    struct {
        unsigned int originalRoutePurpose:1;
        unsigned int routeIndex:1;
    } _has;
}

@property(nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
@property(retain, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;
@property(retain, nonatomic) NSData *routeHandle; // @synthesize routeHandle=_routeHandle;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRouteIndex;
@property(readonly, nonatomic) _Bool hasOriginalDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (id)originalRoutePurposeAsString:(int)arg1;
@property(nonatomic) _Bool hasOriginalRoutePurpose;
@property(nonatomic) int originalRoutePurpose; // @synthesize originalRoutePurpose=_originalRoutePurpose;

@end

