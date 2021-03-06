//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPPackageManifestItem : PBCodable <NSCopying>
{
    long long _size;
    NSData *_signature;
    _Bool _lastItem;
    struct {
        unsigned int size:1;
        unsigned int lastItem:1;
    } _has;
}

@property(nonatomic) _Bool lastItem; // @synthesize lastItem=_lastItem;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
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
@property(nonatomic) _Bool hasLastItem;
@property(nonatomic) _Bool hasSize;
@property(readonly, nonatomic) _Bool hasSignature;

@end

