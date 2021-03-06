//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEORPVisibleTileSet : PBCodable <NSCopying>
{
    struct GEORPVisibleTileKey *_tileKeys;
    unsigned int _tileKeysCount;
    unsigned int _tileKeysSpace;
    unsigned int _identifier;
    int _style;
    struct {
        unsigned int identifier:1;
        unsigned int style:1;
    } _has;
}

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setTileKeys:(struct GEORPVisibleTileKey *)arg1 count:(unsigned int)arg2;
- (struct GEORPVisibleTileKey)tileKeyAtIndex:(unsigned int)arg1;
- (void)addTileKey:(struct GEORPVisibleTileKey)arg1;
- (void)clearTileKeys;
@property(readonly, nonatomic) struct GEORPVisibleTileKey *tileKeys;
@property(readonly, nonatomic) unsigned int tileKeysCount;
@property(nonatomic) _Bool hasIdentifier;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)dealloc;

@end

