//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying>
{
    double _expirationTimeInterval;
    unsigned long long _sessionID;
    NSString *_storefrontIdentifier;
    NSData *_token;
    struct {
        unsigned int expirationTimeInterval:1;
        unsigned int sessionID:1;
    } _has;
}

@property(retain, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(nonatomic) double expirationTimeInterval; // @synthesize expirationTimeInterval=_expirationTimeInterval;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasStorefrontIdentifier;
@property(nonatomic) _Bool hasExpirationTimeInterval;
@property(nonatomic) _Bool hasSessionID;
@property(readonly, nonatomic) _Bool hasToken;

@end

