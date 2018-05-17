//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOMiniCard, NSString;

@interface GEOTrafficCamera : PBCodable <NSCopying>
{
    double _speedThreshold;
    unsigned int _cameraPriority;
    unsigned int _highlightDistance;
    NSString *_identifier;
    GEOMiniCard *_infoCard;
    GEOLatLng *_position;
    NSString *_speedLimitText;
    GEOMiniCard *_speedingCard;
    int _type;
    struct {
        unsigned int speedThreshold:1;
        unsigned int cameraPriority:1;
        unsigned int highlightDistance:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned int cameraPriority; // @synthesize cameraPriority=_cameraPriority;
@property(retain, nonatomic) GEOMiniCard *speedingCard; // @synthesize speedingCard=_speedingCard;
@property(nonatomic) double speedThreshold; // @synthesize speedThreshold=_speedThreshold;
@property(retain, nonatomic) NSString *speedLimitText; // @synthesize speedLimitText=_speedLimitText;
@property(retain, nonatomic) GEOMiniCard *infoCard; // @synthesize infoCard=_infoCard;
@property(nonatomic) unsigned int highlightDistance; // @synthesize highlightDistance=_highlightDistance;
@property(retain, nonatomic) GEOLatLng *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(nonatomic) BOOL hasCameraPriority;
@property(readonly, nonatomic) BOOL hasSpeedingCard;
@property(nonatomic) BOOL hasSpeedThreshold;
@property(readonly, nonatomic) BOOL hasSpeedLimitText;
@property(readonly, nonatomic) BOOL hasInfoCard;
@property(nonatomic) BOOL hasHighlightDistance;
@property(readonly, nonatomic) BOOL hasPosition;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end
