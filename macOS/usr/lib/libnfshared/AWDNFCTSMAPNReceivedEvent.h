//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface AWDNFCTSMAPNReceivedEvent : PBCodable <NSCopying>
{
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_uuidReference;
    CDStruct_5791c111 _has;
}

@property(nonatomic) unsigned long long timeDeltaFromReference; // @synthesize timeDeltaFromReference=_timeDeltaFromReference;
@property(retain, nonatomic) NSData *uuidReference; // @synthesize uuidReference=_uuidReference;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTimeDeltaFromReference;
@property(readonly, nonatomic) BOOL hasUuidReference;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end

