//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitNamedItem.h"
#import "NSCopying.h"

@class GEOLatLng, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    GEOLatLng *_location;
    NSString *_nameDisplayString;
    unsigned int _stationIndex;
    int _structureType;
    NSMutableArray *_zoomNames;
    struct {
        unsigned int muid:1;
        unsigned int stationIndex:1;
        unsigned int structureType:1;
    } _has;
}

+ (Class)zoomNameType;
@property(retain, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property(retain, nonatomic) NSMutableArray *zoomNames; // @synthesize zoomNames=_zoomNames;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned int stationIndex; // @synthesize stationIndex=_stationIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasNameDisplayString;
- (id)zoomNameAtIndex:(unsigned int)arg1;
- (unsigned int)zoomNamesCount;
- (void)addZoomName:(id)arg1;
- (void)clearZoomNames;
- (int)StringAsStructureType:(id)arg1;
- (id)structureTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasStructureType;
@property(nonatomic) int structureType; // @synthesize structureType=_structureType;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) _Bool hasStationIndex;
- (id)identifier;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
