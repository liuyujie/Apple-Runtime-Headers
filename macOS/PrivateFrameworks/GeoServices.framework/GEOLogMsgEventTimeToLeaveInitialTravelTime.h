//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOLogMsgEventTimeToLeaveInitialTravelTime : PBCodable <NSCopying>
{
    int _travelTime;
    CDStruct_36597415 _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTravelTime:(id)arg1;
- (id)travelTimeAsString:(int)arg1;
@property(nonatomic) BOOL hasTravelTime;
@property(nonatomic) int travelTime; // @synthesize travelTime=_travelTime;

@end

