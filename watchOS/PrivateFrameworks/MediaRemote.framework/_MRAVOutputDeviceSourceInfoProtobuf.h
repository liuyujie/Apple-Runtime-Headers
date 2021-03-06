//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying>
{
    NSString *_routingContextUID;
    _Bool _multipleBuiltInDevices;
    struct {
        unsigned int multipleBuiltInDevices:1;
    } _has;
}

@property(nonatomic) _Bool multipleBuiltInDevices; // @synthesize multipleBuiltInDevices=_multipleBuiltInDevices;
@property(retain, nonatomic) NSString *routingContextUID; // @synthesize routingContextUID=_routingContextUID;
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
@property(nonatomic) _Bool hasMultipleBuiltInDevices;
@property(readonly, nonatomic) _Bool hasRoutingContextUID;

@end

