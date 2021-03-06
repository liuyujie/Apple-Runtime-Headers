//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface GEOTFPredictedSpeed : PBCodable <NSCopying>
{
    unsigned int _deltaMinutesInFuture;
    unsigned int _speed;
    struct {
        unsigned int deltaMinutesInFuture:1;
        unsigned int speed:1;
    } _has;
}

@property(nonatomic) unsigned int speed; // @synthesize speed=_speed;
@property(nonatomic) unsigned int deltaMinutesInFuture; // @synthesize deltaMinutesInFuture=_deltaMinutesInFuture;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) _Bool hasDeltaMinutesInFuture;

@end

