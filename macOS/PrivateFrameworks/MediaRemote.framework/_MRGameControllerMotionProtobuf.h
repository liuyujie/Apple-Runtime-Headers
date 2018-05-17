//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying>
{
    _MRGameControllerAccelerationProtobuf *_attitude;
    _MRGameControllerAccelerationProtobuf *_gravity;
    _MRGameControllerAccelerationProtobuf *_rotation;
    _MRGameControllerAccelerationProtobuf *_userAcceleration;
}

@property(retain, nonatomic) _MRGameControllerAccelerationProtobuf *rotation; // @synthesize rotation=_rotation;
@property(retain, nonatomic) _MRGameControllerAccelerationProtobuf *attitude; // @synthesize attitude=_attitude;
@property(retain, nonatomic) _MRGameControllerAccelerationProtobuf *userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property(retain, nonatomic) _MRGameControllerAccelerationProtobuf *gravity; // @synthesize gravity=_gravity;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRotation;
@property(readonly, nonatomic) BOOL hasAttitude;
@property(readonly, nonatomic) BOOL hasUserAcceleration;
@property(readonly, nonatomic) BOOL hasGravity;

@end
