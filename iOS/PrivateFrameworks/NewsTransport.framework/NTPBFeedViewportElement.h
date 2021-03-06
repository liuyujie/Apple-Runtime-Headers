//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, NTPBFeedViewportGap, NTPBFeedViewportGroup;

@interface NTPBFeedViewportElement : PBCodable <NSCopying>
{
    NSString *_identifier;
    NTPBFeedViewportGap *_pbGap;
    NTPBFeedViewportGroup *_pbGroup;
    int _type;
    CDStruct_f953fb60 _has;
}

@property(retain, nonatomic) NTPBFeedViewportGap *pbGap; // @synthesize pbGap=_pbGap;
@property(retain, nonatomic) NTPBFeedViewportGroup *pbGroup; // @synthesize pbGroup=_pbGroup;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPbGap;
@property(readonly, nonatomic) _Bool hasPbGroup;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;

@end

