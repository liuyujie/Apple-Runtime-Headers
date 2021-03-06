//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface GEORegionalResourceRegion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_tileRanges;
    unsigned int _tileRangesCount;
    unsigned int _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
}

+ (Class)iconChecksumType;
+ (Class)attributionType;
+ (Class)iconType;
@property(retain, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
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
- (id)iconChecksumAtIndex:(unsigned int)arg1;
- (unsigned int)iconChecksumsCount;
- (void)addIconChecksum:(id)arg1;
- (void)clearIconChecksums;
- (id)attributionAtIndex:(unsigned int)arg1;
- (unsigned int)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
- (id)iconAtIndex:(unsigned int)arg1;
- (unsigned int)iconsCount;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
- (void)setTileRanges:(struct GEOTileSetRegion *)arg1 count:(unsigned int)arg2;
- (struct GEOTileSetRegion)tileRangeAtIndex:(unsigned int)arg1;
- (void)addTileRange:(struct GEOTileSetRegion)arg1;
- (void)clearTileRanges;
@property(readonly, nonatomic) struct GEOTileSetRegion *tileRanges;
@property(readonly, nonatomic) unsigned int tileRangesCount;
- (void)dealloc;

@end

