//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTFRoadSpeed : PBCodable <NSCopying>
{
    CDStruct_815f15fd _geoIds;
    CDStruct_d570ea55 _latitudeCoordinates;
    CDStruct_d570ea55 _longitudeCoordinates;
    long long _geoid;
    int _color;
    float _confidence;
    unsigned int _decayTimeWindowInMinutes;
    float _endOffset;
    NSData *_openlr;
    NSMutableArray *_predictedSpeeds;
    unsigned int _speedKph;
    float _startOffset;
    NSData *_zilch;
    _Bool _hidden;
    CDStruct_c254c6af _has;
}

+ (Class)predictedSpeedType;
@property(retain, nonatomic) NSData *openlr; // @synthesize openlr=_openlr;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned int decayTimeWindowInMinutes; // @synthesize decayTimeWindowInMinutes=_decayTimeWindowInMinutes;
@property(retain, nonatomic) NSData *zilch; // @synthesize zilch=_zilch;
@property(nonatomic) unsigned int speedKph; // @synthesize speedKph=_speedKph;
@property(retain, nonatomic) NSMutableArray *predictedSpeeds; // @synthesize predictedSpeeds=_predictedSpeeds;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) float endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) long long geoid; // @synthesize geoid=_geoid;
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
@property(readonly, nonatomic) _Bool hasOpenlr;
- (void)setGeoIds:(long long *)arg1 count:(unsigned int)arg2;
- (long long)geoIdsAtIndex:(unsigned int)arg1;
- (void)addGeoIds:(long long)arg1;
- (void)clearGeoIds;
@property(readonly, nonatomic) long long *geoIds;
@property(readonly, nonatomic) unsigned int geoIdsCount;
- (void)setLongitudeCoordinates:(float *)arg1 count:(unsigned int)arg2;
- (float)longitudeCoordinatesAtIndex:(unsigned int)arg1;
- (void)addLongitudeCoordinates:(float)arg1;
- (void)clearLongitudeCoordinates;
@property(readonly, nonatomic) float *longitudeCoordinates;
@property(readonly, nonatomic) unsigned int longitudeCoordinatesCount;
- (void)setLatitudeCoordinates:(float *)arg1 count:(unsigned int)arg2;
- (float)latitudeCoordinatesAtIndex:(unsigned int)arg1;
- (void)addLatitudeCoordinates:(float)arg1;
- (void)clearLatitudeCoordinates;
@property(readonly, nonatomic) float *latitudeCoordinates;
@property(readonly, nonatomic) unsigned int latitudeCoordinatesCount;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) _Bool hasDecayTimeWindowInMinutes;
@property(readonly, nonatomic) _Bool hasZilch;
@property(nonatomic) _Bool hasSpeedKph;
- (int)StringAsColor:(id)arg1;
- (id)colorAsString:(int)arg1;
@property(nonatomic) _Bool hasColor;
@property(nonatomic) int color; // @synthesize color=_color;
- (id)predictedSpeedAtIndex:(unsigned int)arg1;
- (unsigned int)predictedSpeedsCount;
- (void)addPredictedSpeed:(id)arg1;
- (void)clearPredictedSpeeds;
@property(nonatomic) _Bool hasHidden;
@property(nonatomic) _Bool hasEndOffset;
@property(nonatomic) _Bool hasStartOffset;
- (void)dealloc;

@end

