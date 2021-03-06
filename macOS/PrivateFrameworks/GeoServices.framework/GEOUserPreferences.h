//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOUserPreferences : PBCodable <NSCopying>
{
    BOOL _avoidHighways;
    BOOL _avoidTolls;
    struct {
        unsigned int avoidHighways:1;
        unsigned int avoidTolls:1;
    } _has;
}

@property(nonatomic) BOOL avoidHighways; // @synthesize avoidHighways=_avoidHighways;
@property(nonatomic) BOOL avoidTolls; // @synthesize avoidTolls=_avoidTolls;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAvoidHighways;
@property(nonatomic) BOOL hasAvoidTolls;

@end

