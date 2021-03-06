//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDVenueLabel, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueLevel : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _levelId;
    GEOPDVenueLabel *_label;
    int _ordinal;
    struct {
        unsigned int levelId:1;
        unsigned int ordinal:1;
    } _has;
}

@property(retain, nonatomic) GEOPDVenueLabel *label; // @synthesize label=_label;
@property(nonatomic) int ordinal; // @synthesize ordinal=_ordinal;
@property(nonatomic) unsigned long long levelId; // @synthesize levelId=_levelId;
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
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasOrdinal;
@property(nonatomic) _Bool hasLevelId;

@end

