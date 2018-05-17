//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface NPKProtoSignDataResponse : PBCodable <NSCopying>
{
    NSData *_certsBytes;
    NSData *_signatureInfoBytes;
    NSData *_signedData;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property(retain, nonatomic) NSData *signatureInfoBytes; // @synthesize signatureInfoBytes=_signatureInfoBytes;
@property(retain, nonatomic) NSData *certsBytes; // @synthesize certsBytes=_certsBytes;
@property(retain, nonatomic) NSData *signedData; // @synthesize signedData=_signedData;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
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
@property(readonly, nonatomic) _Bool hasSignatureInfoBytes;
@property(readonly, nonatomic) _Bool hasCertsBytes;
@property(readonly, nonatomic) _Bool hasSignedData;
@property(nonatomic) _Bool hasPending;

@end
