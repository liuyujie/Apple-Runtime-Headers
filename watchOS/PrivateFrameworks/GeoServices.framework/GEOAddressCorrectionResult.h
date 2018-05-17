//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOAddressCorrectionResult : PBCodable <NSCopying>
{
    NSString *_addressID;
    NSMutableArray *_significantLocations;
}

+ (Class)significantLocationType;
@property(retain, nonatomic) NSMutableArray *significantLocations; // @synthesize significantLocations=_significantLocations;
@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)significantLocationAtIndex:(unsigned int)arg1;
- (unsigned int)significantLocationsCount;
- (void)addSignificantLocation:(id)arg1;
- (void)clearSignificantLocations;
@property(readonly, nonatomic) _Bool hasAddressID;

@end
