//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString, SYErrorInfo, SYMessageHeader;

@interface SYStartSyncSessionResponse : PBCodable <NSCopying>
{
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSData *_metadata;
    NSString *_sessionID;
    _Bool _accepted;
    _Bool _supportsRestart;
    _Bool _supportsRollback;
}

@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool supportsRestart; // @synthesize supportsRestart=_supportsRestart;
@property(nonatomic) _Bool supportsRollback; // @synthesize supportsRollback=_supportsRollback;
@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) _Bool accepted; // @synthesize accepted=_accepted;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasError;

@end

