//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface _MRVolumeDidChangeMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_endpointUID;
    NSString *_outputDeviceUID;
    float _volume;
    CDStruct_731552e5 _has;
}

@property(retain, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
@property(retain, nonatomic) NSString *endpointUID; // @synthesize endpointUID=_endpointUID;
@property(nonatomic) float volume; // @synthesize volume=_volume;
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
@property(readonly, nonatomic) _Bool hasOutputDeviceUID;
@property(readonly, nonatomic) _Bool hasEndpointUID;
@property(nonatomic) _Bool hasVolume;

@end

