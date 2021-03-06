//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface HDCodableAuthorization : PBCodable <NSCopying>
{
    long long _authorizationMode;
    long long _authorizationRequest;
    long long _authorizationStatus;
    double _modificationDate;
    long long _modificationEpoch;
    long long _objectType;
    struct {
        unsigned int authorizationMode:1;
        unsigned int authorizationRequest:1;
        unsigned int authorizationStatus:1;
        unsigned int modificationDate:1;
        unsigned int modificationEpoch:1;
        unsigned int objectType:1;
    } _has;
}

@property(nonatomic) long long authorizationMode; // @synthesize authorizationMode=_authorizationMode;
@property(nonatomic) long long modificationEpoch; // @synthesize modificationEpoch=_modificationEpoch;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) long long authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAuthorizationMode;
@property(nonatomic) _Bool hasModificationEpoch;
@property(nonatomic) _Bool hasModificationDate;
@property(nonatomic) _Bool hasAuthorizationRequest;
@property(nonatomic) _Bool hasAuthorizationStatus;
@property(nonatomic) _Bool hasObjectType;
- (void)_setModificationDate:(id)arg1;
- (id)_modificationDate;
- (void)_setAuthorizationModeWithNumber:(id)arg1;
- (int)_authorizationMode;
- (void)_setAuthorizationRequestWithNumber:(id)arg1;
- (int)_authorizationRequest;
- (void)_setAuthorizationStatusWithNumber:(id)arg1;
- (int)_authorizationStatus;
- (void)_setDataTypeCodeWithObjectType:(id)arg1;
- (int)_dataTypeCode;

@end

