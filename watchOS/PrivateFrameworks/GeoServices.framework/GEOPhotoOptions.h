//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOPhotoOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_56d48c16 _photoSizes;
    int _maxPhotos;
    int _photoType;
    CDStruct_86c1f53f _has;
}

@property(nonatomic) int maxPhotos; // @synthesize maxPhotos=_maxPhotos;
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
- (int)StringAsPhotoSizes:(id)arg1;
- (id)photoSizesAsString:(int)arg1;
- (void)setPhotoSizes:(int *)arg1 count:(unsigned int)arg2;
- (int)photoSizeAtIndex:(unsigned int)arg1;
- (void)addPhotoSize:(int)arg1;
- (void)clearPhotoSizes;
@property(readonly, nonatomic) int *photoSizes;
@property(readonly, nonatomic) unsigned int photoSizesCount;
- (int)StringAsPhotoType:(id)arg1;
- (id)photoTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPhotoType;
@property(nonatomic) int photoType; // @synthesize photoType=_photoType;
- (void)dealloc;

@end
