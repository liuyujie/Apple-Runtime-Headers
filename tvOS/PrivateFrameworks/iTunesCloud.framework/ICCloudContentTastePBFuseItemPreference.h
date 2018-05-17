//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface ICCloudContentTastePBFuseItemPreference : PBCodable <NSCopying>
{
    long long _adamId;
    long long _createdOffsetMillis;
    NSString *_externalId;
    int _preference;
    int _preferenceType;
    struct {
        unsigned int adamId:1;
        unsigned int createdOffsetMillis:1;
        unsigned int preferenceType:1;
    } _has;
}

@property(nonatomic) long long createdOffsetMillis; // @synthesize createdOffsetMillis=_createdOffsetMillis;
@property(retain, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
@property(nonatomic) int preference; // @synthesize preference=_preference;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPreferenceType;
@property(nonatomic) int preferenceType; // @synthesize preferenceType=_preferenceType;
@property(nonatomic) _Bool hasCreatedOffsetMillis;
@property(readonly, nonatomic) _Bool hasExternalId;
@property(nonatomic) _Bool hasAdamId;

@end
