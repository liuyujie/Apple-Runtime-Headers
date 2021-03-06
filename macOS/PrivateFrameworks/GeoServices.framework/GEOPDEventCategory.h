//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEventCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _eventLookupCategory;
    NSMutableArray *_localizedCategorys;
    struct {
        unsigned int eventLookupCategory:1;
    } _has;
}

+ (Class)localizedCategoryType;
@property(retain, nonatomic) NSMutableArray *localizedCategorys; // @synthesize localizedCategorys=_localizedCategorys;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategorysCount;
- (void)addLocalizedCategory:(id)arg1;
- (void)clearLocalizedCategorys;
- (int)StringAsEventLookupCategory:(id)arg1;
- (id)eventLookupCategoryAsString:(int)arg1;
@property(nonatomic) BOOL hasEventLookupCategory;
@property(nonatomic) int eventLookupCategory; // @synthesize eventLookupCategory=_eventLookupCategory;

@end

