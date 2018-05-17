//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_extendedLocations;
    NSMutableArray *_locations;
    int _placeTypeLimit;
    BOOL _preserveOriginalLocation;
    struct {
        unsigned int placeTypeLimit:1;
        unsigned int preserveOriginalLocation:1;
    } _has;
}

+ (Class)extendedLocationType;
+ (Class)locationType;
@property(retain, nonatomic) NSMutableArray *extendedLocations; // @synthesize extendedLocations=_extendedLocations;
@property(nonatomic) BOOL preserveOriginalLocation; // @synthesize preserveOriginalLocation=_preserveOriginalLocation;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)extendedLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)extendedLocationsCount;
- (void)addExtendedLocation:(id)arg1;
- (void)clearExtendedLocations;
@property(nonatomic) BOOL hasPreserveOriginalLocation;
- (int)StringAsPlaceTypeLimit:(id)arg1;
- (id)placeTypeLimitAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceTypeLimit;
@property(nonatomic) int placeTypeLimit; // @synthesize placeTypeLimit=_placeTypeLimit;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)addLocation:(id)arg1;
- (void)clearLocations;

@end
