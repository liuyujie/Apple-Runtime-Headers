//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_084d6ede _categoryIndexs;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    struct {
        unsigned int dayOfWeek:1;
        unsigned int hourOfDay:1;
    } _has;
}

@property(nonatomic) unsigned int hourOfDay; // @synthesize hourOfDay=_hourOfDay;
@property(nonatomic) unsigned int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
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
- (void)setCategoryIndexs:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)categoryIndexAtIndex:(unsigned int)arg1;
- (void)addCategoryIndex:(unsigned int)arg1;
- (void)clearCategoryIndexs;
@property(readonly, nonatomic) unsigned int *categoryIndexs;
@property(readonly, nonatomic) unsigned int categoryIndexsCount;
@property(nonatomic) _Bool hasHourOfDay;
@property(nonatomic) _Bool hasDayOfWeek;
- (void)dealloc;

@end
