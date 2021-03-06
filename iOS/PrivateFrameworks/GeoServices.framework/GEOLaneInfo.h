//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOLaneInfo : PBCodable <NSCopying>
{
    NSMutableArray *_arrows;
    _Bool _hov;
    _Bool _preferredForMultipleManeuvers;
    _Bool _supportsManeuver;
    struct {
        unsigned int hov:1;
        unsigned int preferredForMultipleManeuvers:1;
        unsigned int supportsManeuver:1;
    } _has;
}

+ (Class)arrowType;
@property(retain, nonatomic) NSMutableArray *arrows; // @synthesize arrows=_arrows;
@property(nonatomic) _Bool hov; // @synthesize hov=_hov;
@property(nonatomic) _Bool preferredForMultipleManeuvers; // @synthesize preferredForMultipleManeuvers=_preferredForMultipleManeuvers;
@property(nonatomic) _Bool supportsManeuver; // @synthesize supportsManeuver=_supportsManeuver;
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
- (id)arrowAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrowsCount;
- (void)addArrow:(id)arg1;
- (void)clearArrows;
@property(nonatomic) _Bool hasHov;
@property(nonatomic) _Bool hasPreferredForMultipleManeuvers;
@property(nonatomic) _Bool hasSupportsManeuver;

@end

